#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  vector<ll> a(n);
  for (ll i = 0; i < n; i++) {
    cin >> a[i];
  }

  map<ll, ll> m;
  vector<ll> b(n + 1);
  b[0] = 0;
  m[0]++;
  for (ll i = 0; i < n; i++) {
    b[i + 1] = b[i] + a[i];
    m[b[i + 1]]++;
  }
  ll cnt = 0;
  for (auto it : m) {
    ll c = it.second;
    cnt += (c * (c - 1) / 2);
  }

  cout << cnt << endl;
}