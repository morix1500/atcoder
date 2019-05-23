#include <bits/stdc++.h>
using namespace std;

int main() {
  string sd, t;
  cin >> sd >> t;

  string s = sd;
  bool res = false;
  for (int i = sd.size() - 1; i >= 0; i--) {
    int cnt  = 0;
    string a = s;
    for (int j = 0; j < t.size(); j++) {
      int index = i - t.size() + 1 + j;
      if (index >= sd.size()) break;
      if (sd[index] == t[j] || sd[index] == '?') {
        cnt++;
        a[index] = t[j];
      } else {
        break;
      }
    }
    if (cnt == t.size()) {
      s   = a;
      res = true;
      break;
    }
  }
  if (!res) {
    cout << "UNRESTORABLE" << endl;
    return 0;
  }
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '?') {
      cout << 'a';
    } else {
      cout << s[i];
    }
  }
  cout << endl;
}