#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  vector<ll> dp(n + 1, LLONG_MAX);
  dp[0] = 0;
  dp[1] = 0;
  dp[2] = abs(a[1] - a[0]);
  for (int i = 3; i <= n; i++) {
    ll a1 = dp[i - 1] + abs(a[i - 2] - a[i - 1]);
    ll a2 = dp[i - 2] + abs(a[i - 3] - a[i - 1]);
    dp[i] = min(a1, a2);
  }
  cout << dp[n] << endl;
}