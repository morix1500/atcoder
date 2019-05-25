#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, m;
  cin >> n >> m;
  vector<ll> L(m), R(m);
  ll lmax = 0;
  ll rmin = LLONG_MAX;
  for (int i = 0; i < m; i++) {
    cin >> L[i] >> R[i];
    lmax = max(lmax, L[i]);
    rmin = min(rmin, R[i]);
  }
  if (rmin - lmax < 0) {
    cout << 0 << endl;

  } else {

    cout << rmin - lmax + 1 << endl;
  }
}