#include <bits/stdc++.h>
using namespace std;

int main() {
  int w, a, b;
  cin >> w >> a >> b;

  if (a < b) {
    if ((a + w) > b) {
      cout << 0 << endl;
    } else {
      cout << b - (a + w) << endl;
    }
  } else {
    if ((b + w) > a) {
      cout << 0 << endl;
    } else {
      cout << a - (b + w) << endl;
    }
  }
}