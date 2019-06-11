#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, W;
  cin >> n >> W;
  vector<ll> w(n), v(n);
  for (int i = 0; i < n; i++)
    cin >> w[i] >> v[i];

  vector<vector<ll>> dp(n + 1, vector<ll>(100000));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= 100000; j++) {
      if (j >= w[i]) {
        dp[i + 1][j] = max(dp[i][j - w[i]] + v[i], dp[i][j]);
      } else {
        dp[i + 1][j] = dp[i][j];
      }
    }
  }
  cout << dp[n][W] << endl;
}