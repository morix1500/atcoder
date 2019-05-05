#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<double> r(n);
  for (int i = 0; i < n; i++)
    cin >> r[i];

  sort(r.begin(), r.end(), greater<double>());

  double sum = 0;
  for (int i = 0; i < n; i++) {
    double tmp = r[i] * r[i];
    if (i % 2 == 0) {
      sum += tmp;
    } else {
      sum -= tmp;
    }
  }
  cout << fixed << setprecision(7) << sum * M_PI << endl;
}