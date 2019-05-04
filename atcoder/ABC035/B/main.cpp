#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int t;
  cin >> s >> t;

  int n = s.size();

  int x      = 0;
  int y      = 0;
  int hatena = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'L') {
      x--;
    } else if (s[i] == 'R') {
      x++;
    } else if (s[i] == 'U') {
      y++;
    } else if (s[i] == 'D') {
      y--;
    } else {
      hatena++;
    }
  }
  if (t == 1) {
    cout << (abs(x) + abs(y) + hatena) << endl;
  } else {
    int tmp = abs(x) + abs(y);
    if (tmp - hatena >= 0) {
      cout << (tmp - hatena) << endl;
    } else {
      int res = 0;
      if (tmp % 2 == 1) {
        if (hatena % 2 == 1) {
          res = 0;
        } else {
          res = 1;
        }
      } else {
        if (hatena % 2 == 0) {
          res = 0;
        } else {
          res = 1;
        }
      }
      cout << res << endl;
    }
  }
}