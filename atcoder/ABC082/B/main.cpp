#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;
  sort(s.begin(), s.end());
  sort(t.begin(), t.end(), greater<int>());
  int n      = s.size();
  int m      = t.size();
  bool res   = true;
  string tmp = "";
  for (int i = 0; i < n; i++) {
    if (s[i] > t[i]) {
      res = false;
      break;
    } else if (s[i] == t[i]) {
      tmp += t[i];
      continue;
    } else {
      break;
    }
  }
  if (s == tmp && n >= m) { res = false; }
  if (res) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}