#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
static const ll MOD = 1000000007;

int main() {
  ll n, m;
  cin >> n >> m;
  vector<ll> a(n);
  map<ll, ll> M;
  for (int i = 0; i < m; i++) {
    cin >> a[i];
    M[a[i]] = 1;
  }
  vector<ll> dp(n + 2);
  dp[0] = 0;
  dp[1] = 1;

  if (M[1] == 1 && M[2] == 1) {
    cout << 0 << endl;
    return 0;
  }

  for (int i = 2; i <= n + 1; i++) {
    if (M[i - 1]) { continue; }
    if (dp[i - 1] == 0 && dp[i - 2] == 0) {
      cout << 0 << endl;
      return 0;
    }
    dp[i] = (dp[i - 1]) % MOD + dp[i - 2] % MOD;
  }
  cout << dp[n + 1] % MOD << endl;
}