#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  string s;
  cin >> a >> b >> s;
  bool res = true;

  string A = "", B = "";
  for (int i = 0; i < s.size(); i++) {
    if (i < a || i > a) {
      if (i < a) {
        A += s[i];
      } else {
        B += s[i];
      };
      int tmp = s[i] - '0';
      if (!(tmp >= 0 && tmp <= 9)) {
        res = false;
        break;
      }
    } else {
      if (!(s[i] == '-')) {
        res = false;
        break;
      }
    }
  }
  if (!(A + "-" + B == s)) res = false;

  if (res) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}