#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll mod(ll n, ll k, ll m) {
  if (k == 0) {
    return 1;
  } else if (k % 2 == 1) {
    return (mod(n, k - 1, m)) * n % m;
  } else {
    ll t = mod(n, k / 2, m) % m;
    return t * t % m;
  }
}

int main() {
  ll N, M, P;
  cin >> N >> M >> P;

  ll res = mod(N, P, M);
  cout << res << endl;
}