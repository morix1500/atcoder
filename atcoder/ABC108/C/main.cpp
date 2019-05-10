#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, k;
  cin >> n >> k;

  vector<ll> arr(n);
  ll x = 0, y = 0;
  bool iseven = k % 2 == 0 ? true : false;
  for (ll i = 1; i <= n; i++) {
    ll tmp = i % k;
    if (tmp == 0) x++;
    if (iseven) {
      if (tmp == k / 2) y++;
    }
  }
  ll sum = pow(x, 3);
  if (iseven) { sum += pow(y, 3); }
  cout << sum << endl;
}