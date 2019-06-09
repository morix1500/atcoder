#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  ll A;
  cin >> A;

  vector<vector<ll>> dp(n + 1, vector<ll>(10001));
  dp[0][0] = 1;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= A; j++) {
      if (j >= a[i]) {
        dp[i + 1][j] = dp[i][j - a[i]] + dp[i][j];
      } else {
        dp[i + 1][j] = dp[i][j];
      }
    }
  }
  cout << dp[n][A] << endl;
}