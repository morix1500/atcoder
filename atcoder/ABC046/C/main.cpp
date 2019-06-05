#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;
  vector<ll> t(n), a(n);
  for (int i = 0; i < n; i++)
    cin >> t[i] >> a[i];

  ll T = 1;
  ll A = 1;
  for (int i = 0; i < n; i++) {
    ll x = T / t[i];
    ll y = A / a[i];
    if (T % t[i] != 0) x++;
    if (A % a[i] != 0) y++;
    ll co = max(x, y);
    T     = co * t[i];
    A     = co * a[i];
  }
  cout << T + A << endl;
}