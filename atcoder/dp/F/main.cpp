#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  string s, t;
  cin >> s >> t;

  int n = s.size();
  int m = t.size();

  vector<vector<int>> dp(n + 1, vector<int>(m + 1));
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      if (s[i - 1] == t[j - 1]) {
        dp[i][j] = dp[i - 1][j - 1] + 1;
      } else {
        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
      }
    }
  }
  string ans = "";
  while (n > 0 && m > 0) {
    if (dp[n][m] == dp[n - 1][m]) {
      // (i-1,j) -> (i,j) と更新された
      n--;
    } else if (dp[n][m] == dp[n][m - 1]) {
      // (i,j-1) -> (i,j) と更新された
      m--;
    } else {
      n--;
      m--;
      ans += s[n];
    }
  }
  reverse(ans.begin(), ans.end());
  cout << ans << endl;
}