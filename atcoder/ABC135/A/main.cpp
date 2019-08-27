#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  int mx = max(a, b);
  for (int k = mx; k >= 0; k--) {
    if (abs(a - k) == abs(b - k)) {
      cout << k << endl;
      return 0;
    }
  }
  cout << "IMPOSSIBLE" << endl;
  return 0;
}