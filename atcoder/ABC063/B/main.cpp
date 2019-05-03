#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  bool res = true;
  map<char, int> ma;
  for (int i = 0; i < s.size(); i++) {
    if (ma[s[i]] != 0) {
      res = false;
      break;
    } else {
      ma[s[i]] = 1;
    }
  }
  if (res) {
    cout << "yes" << endl;
  } else {
    cout << "no" << endl;
  }
}