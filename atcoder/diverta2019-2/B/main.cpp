#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;
  vector<ll> x(n), y(n);
  vector<pair<ll, ll>> xy(n);
  for (int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
    xy[i] = make_pair(x[i], y[i]);
  }

  sort(xy.begin(), xy.end(), greater<pair<ll, ll>>());
  map<pair<ll, ll>, ll> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j) continue;
      ll diffX = xy[i].first - xy[j].first;
      ll diffY = xy[i].second - xy[j].second;
      m[make_pair(diffX, diffY)]++;
    }
  }
  ll mx = 0;

  for (auto v : m) {
    mx = max(mx, v.second);
  }
  cout << 1 + (n - 1) - mx << endl;
}