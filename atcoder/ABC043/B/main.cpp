#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  string res = "";
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '0') {
      res += '0';
    } else if (s[i] == '1') {
      res += '1';
    } else {
      if (res.size() != 0) { res.erase(res.size() - 1, 1); }
    }
  }
  cout << res << endl;
}