#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  vector<ll> dp(100000, n);
  dp[0] = 0;
  for (ll i = 0; i < n; i++) {
    for (ll pow6 = 1; i + pow6 <= n; pow6 *= 6) {
      dp[i + pow6] = min(dp[i + pow6], dp[i] + 1);
    }
    for (ll pow9 = 1; i + pow9 <= n; pow9 *= 9) {
      dp[i + pow9] = min(dp[i + pow9], dp[i] + 1);
    }
  }
  cout << dp[n] << endl;
}