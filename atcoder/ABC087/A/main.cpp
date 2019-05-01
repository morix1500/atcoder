#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, a, b;
  cin >> x >> a >> b;

  x -= a;
  while (true) {
    if (x - b >= 0) {
      x -= b;
    } else {
      break;
    }
  }
  cout << x << endl;
}