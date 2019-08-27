#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  double n;
  cin >> n;
  vector<double> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  double sum = 0.0;
  for (int i = 0; i < n; i++) {
    sum += (1.0 / a[i]);
  }
  cout << fixed << setprecision(5) << 1.0 / sum << endl;
}