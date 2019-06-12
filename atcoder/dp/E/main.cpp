#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, W;
  cin >> n >> W;
  vector<ll> w(n), v(n);
  for (int i = 0; i < n; i++)
    cin >> w[i] >> v[i];

  vector<vector<ll>> dp(n + 1, vector<ll>(1000000, W + 1));
  dp[0][0] = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= 1000000; j++) {
      if (j >= v[i]) {
        ll tmp = dp[i][j - v[i]] + w[i];
        if (tmp > W) {
          dp[i + 1][j] = dp[i][j];
        } else {
          dp[i + 1][j] = min(tmp, dp[i][j]);
        }
      } else {
        dp[i + 1][j] = dp[i][j];
      }
    }
  }
  ll ans = 0;
  for (ll i = 0; i <= 100000; i++) {
    if (dp[n][i] <= W) { ans = max(ans, i); }
  }
  cout << ans << endl;
}