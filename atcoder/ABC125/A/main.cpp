#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, t;
  cin >> a >> b >> t;

  int n     = 0;
  int index = 1;
  int res   = 0;
  while ((t + 0.5) > n) {
    n += a;
    if ((t + 0.5) < n) break;
    res += b;
  }
  cout << res << endl;
}