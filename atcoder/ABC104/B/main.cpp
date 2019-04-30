#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int n      = s.size();
  int c      = 0;
  bool lower = true;
  for (int i = 1; i < n; i++) {
    if (i >= 2 && i <= n - 2) {
      if (s[i] == 'C') {
        c++;
        continue;
      }
    }
    if (s[i] >= 'A' && s[i] <= 'Z') {
      lower = false;
      break;
    }
  }
  if (s[0] == 'A' && c == 1 && lower) {
    cout << "AC" << endl;
  } else {
    cout << "WA" << endl;
  }
}