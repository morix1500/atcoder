#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<int> a(n), b(n), c(n);
  for (int i = 0; i < n; i++)
    cin >> a[i] >> b[i] >> c[i];

  vector<vector<int>> dp(n + 1, vector<int>(3));

  for (int i = 1; i <= n; i++) {
    dp[i][0] = max(dp[i - 1][1], dp[i - 1][2]) + a[i - 1];
    dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]) + b[i - 1];
    dp[i][2] = max(dp[i - 1][0], dp[i - 1][1]) + c[i - 1];
  }
  int ans = 0;
  for (int i = 0; i < 3; i++) {
    ans = max(ans, dp[n][i]);
  }
  cout << ans << endl;
}