#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int N, W;
  cin >> N >> W;
  vector<int> v(N), w(N);
  for (int i = 0; i < N; i++)
    cin >> v[i] >> w[i];

  vector<vector<int>> dp(N + 1, vector<int>(10001));
  for (int i = 0; i < N; i++) {
    for (int j = 0; j <= W; j++) {
      if (j >= w[i]) {
        dp[i + 1][j] = max(dp[i][j - w[i]] + v[i], dp[i][j]);
      } else {
        dp[i + 1][j] = dp[i][j];
      }
    }
  }
  cout << dp[N][W] << endl;
}