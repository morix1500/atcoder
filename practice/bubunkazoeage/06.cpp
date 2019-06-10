#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, K, A;
    cin >> n >> K >> A;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<vector<int>> dp(n + 1, vector<int>(10001, 100000));
    dp[0][0] = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= 10000; j++)
        {
            dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
            if (j >= a[i])
            {
                dp[i + 1][j] = min(dp[i][j - a[i]] + 1, dp[i + 1][j]);
            }
        }
    }
    cout << (dp[n][A] <= K ? "YES" : "NO") << endl;
}