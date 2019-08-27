#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<double> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  double ans = 0.0;
  for (int i = 1; i < n; i++) {
    if (v[i - 1] == 0.0) continue;
    v[i]     = ((v[i - 1] + v[i]) / 2);
    ans      = v[i];
    v[i - 1] = 0.0;
    sort(v.begin(), v.end());
    i = 0;
  }
  cout << fixed << setprecision(5) << ans << endl;
}