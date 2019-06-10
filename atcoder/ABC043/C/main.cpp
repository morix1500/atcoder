#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  ll ans = LLONG_MAX;
  for (int y = -100; y <= 100; y++) {
    ll sum = 0;
    for (int i = 0; i < n; i++) {
      sum += pow(a[i] - y, 2);
    }
    ans = min(ans, sum);
  }
  cout << ans << endl;
}