#include <bits/stdc++.h>
using namespace std;

int main() {
  double x;
  cin >> x;

  double sum = 0;
  for (double i = 1; i <= x; i++) {
    sum += ((10000.0 * i) * (1.0 / x));
  }

  cout << fixed << setprecision(7) << sum << endl;
}