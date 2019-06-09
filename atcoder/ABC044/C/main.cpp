#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n, A;
  cin >> n >> A;
  vector<ll> x(n);
  for (int i = 0; i < n; i++) {
    cin >> x[i];
  }
  vector<vector<vector<ll>>> dp(n + 1,
                                vector<vector<ll>>(n + 1, vector<ll>(5555)));
  dp[0][0][0] = 1;
  for (int i = 0; i < n; i++) {
    for (int k = 0; k < n; k++) {
      for (int s = 0; s <= 5000; s++) {
        dp[i + 1][k][s] += dp[i][k][s];
        if (s >= x[i]) { dp[i + 1][k + 1][s] += dp[i][k][s - x[i]]; }
      }
    }
  }
  ll sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += dp[n][i][i * A];
  }

  cout << sum << endl;
}