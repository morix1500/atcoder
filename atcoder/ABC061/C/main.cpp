#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, k;
  cin >> n >> k;
  vector<pair<ll, ll>> ab;
  for (int i = 0; i < n; i++) {
    ll a, b;
    cin >> a >> b;
    ab.push_back(make_pair(a, b));
  }
  sort(ab.begin(), ab.end());

  ll r   = 0;
  ll ans = 0;
  ll i   = 0;
  while (r < k) {
    r += ab[i].second;
    ans = ab[i].first;
    i++;
  }
  cout << ans << endl;
}