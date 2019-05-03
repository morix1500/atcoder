#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  int sum  = 0;
  bool res = false;
  for (int i = a; i <= 10000; i += a) {
    sum += a;
    if (sum % b == c) {
      res = true;
      break;
    }
  }
  if (res) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}