#include <bits/stdc++.h>
using namespace std;

int main() {
  string x;
  cin >> x;
  if (x.empty()) {
    cout << "YES" << endl;
    return 0;
  }
  bool res = true;
  for (int i = 0; i < x.size(); i++) {
    switch (x[i]) {
    case 'h':
      if (i != 0) {
        if (x[i - 1] != 'c') {
          res = false;
          break;
        }
      } else {
        res = false;
      }
      break;
    case 'c':
      if (i != x.size() - 1) {
        if (x[i + 1] != 'h') {
          res = false;
          break;
        }
      } else {
        res = false;
      }
      break;
    case 'o':
      break;
    case 'k':
      break;
    case 'u':
      break;
    default:
      res = false;
      break;
    }
    if (!res) break;
  }
  if (res) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}