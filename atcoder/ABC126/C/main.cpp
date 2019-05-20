#include <bits/stdc++.h>
using namespace std;

int main() {
  double n, k;
  cin >> n >> k;

  double sum = 0.0;
  for (int i = 1; i <= n; i++) {
    int tmp   = i;
    int index = 0;
    while (k > tmp) {
      tmp *= 2;
      index++;
    }
    double t = pow(0.5, index);
    sum += (1 / n) * t;
  }
  cout << fixed << setprecision(12) << sum << endl;
}