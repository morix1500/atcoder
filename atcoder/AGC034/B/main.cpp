#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  string s;
  cin >> s;

  ll aCnt = 0;
  ll cnt  = 0;
  int z   = 1;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'A') {
      if (z == 3) {
        aCnt = 1;
      } else {
        aCnt++;
      }
      z = 2;
    } else if (s[i] == 'B') {
      if (i != 0 && s[i - 1] != 'A') { aCnt = 0; }
      z = 3;
    } else if (s[i] == 'C') {
      if (i >= 1 && s[i - 1] == 'B' && s[i - 2] == 'A') {
        cnt += aCnt;
        s[i] = 'A';
      } else {
        aCnt = 0;
      }
      z = 1;
    }
  }
  cout << cnt << endl;
}