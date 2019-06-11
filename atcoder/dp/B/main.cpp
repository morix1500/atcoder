#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n, K;
  cin >> n >> K;
  vector<int> h(n);
  for (int i = 0; i < n; i++)
    cin >> h[i];

  vector<int> dp(n);
  dp[0] = 0;
  dp[1] = abs(h[1] - h[0]);

  for (int i = 2; i < n; i++) {
    int mn = INT_MAX;
    for (int k = 1; k <= K; k++) {
      if (i - k < 0) break;
      int ret = dp[i - k] + abs(h[i - k] - h[i]);
      mn      = min(mn, ret);
    }
    if (mn == INT_MAX) continue;
    dp[i] = mn;
  }
  cout << dp[n - 1] << endl;
}