#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> divisor(ll n) {
  vector<ll> ret;
  for (ll i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      ret.push_back(i);
      if (i * i != n) ret.push_back(n / i);
    }
  }
  return ret;
}

int main() {
  ll n;
  cin >> n;
  vector<ll> a = divisor(n);
  int ans      = INT_MAX;
  for (int i = 0; i < a.size(); i++) {
    ll b    = max(a[i], n / a[i]);
    int cnt = 0;
    while (b) {
      b /= 10;
      cnt++;
    }
    ans = min(ans, cnt);
  }
  cout << ans << endl;
}