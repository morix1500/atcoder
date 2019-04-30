#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;
  int n = s.size();
  int i = 0, j = n - 1;
  int res = false;
  int cnt = 0;
  while (cnt < n) {
    if (s == t) {
      res = true;
      break;
    }
    char last = s[n - 1];
    s.erase(n - 1, 1);
    s = last + s;
    cnt++;
  }
  if (res) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}