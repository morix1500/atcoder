#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  vector<int> dp(k + 1, INT_MAX);
  dp[0] = 0;

  for (int i = 0; i <= k; i++) {
    for (int j = 0; j < n; j++) {
      if (i - a[j] >= 0) {
        // hoge
        dp[i] = min(dp[i - a[j]] + 1, dp[i]);
      }
    }
  }
  cout << dp[k] << endl;
}