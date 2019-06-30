#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
static const ll MOD = 1000000007;

ll f[101010];
void factInit() {
  f[0] = 1;
  for (ll i = 1; i < 101010; i++)
    f[i] = (f[i - 1] * i) % MOD;
}

ll inv(ll x) {
  ll res = 1;
  ll k   = MOD - 2;
  ll y   = x;
  while (k) {
    if (k & 1) res = (res * y) % MOD;
    y = (y * y) % MOD;
    k /= 2;
  }
  return res;
}

ll combination(ll n, ll r) {
  if (n < r) return 0;
  // nCk = n! / ((n-k)! * k!)
  ll a = f[n];     // = n!
  ll b = f[n - r]; // = (n-k)!
  ll c = f[r];     // = k!

  ll bc = (b % MOD * c % MOD) % MOD;

  return (a * inv(bc)) % MOD; // = return (a / bc) % MOD
}

int main() {
  ll n, k;
  cin >> n >> k;

  ll blue = k;
  ll red  = n - k;
  factInit();

  for (ll i = 1; i <= blue; i++) {
    ll c  = combination(red + 1, i);
    ll c2 = combination(k - 1, i - 1);

    ll res = c % MOD * c2 % MOD;
    cout << res % MOD << endl;
  }
}