#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int A;
  cin >> A;

  vector<vector<int>> dp(n + 1, vector<int>(10001));
  dp[0][0] = 1;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= A; j++) {
      if (j >= a[i]) {
        if (dp[i][j - a[i]] || dp[i][j]) {
          dp[i + 1][j] = 1;
        } else {
          dp[i + 1][j] = 0;
        }
      } else {
        dp[i + 1][j] = dp[i][j];
      }
    }
  }
  cout << (dp[n][A] ? "YES" : "NO") << endl;
}