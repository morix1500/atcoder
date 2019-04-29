#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<vector<int>> D(n, vector<int>(n));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> D[i][j];
    }
  }

  vector<vector<int>> a(n + 1, vector<int>(n + 1));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      a[i + 1][j + 1] = a[i + 1][j] + a[i][j + 1] - a[i][j] + D[i][j];
    }
  }

  vector<ll> res(n * n + 1);
  for (int x1 = 0; x1 < n; x1++) {
    for (int x2 = x1 + 1; x2 <= n; x2++) {
      for (int y1 = 0; y1 < n; y1++) {
        for (int y2 = y1 + 1; y2 <= n; y2++) {
          ll area   = (x2 - x1) * (y2 - y1);
          ll sum    = a[x2][y2] - a[x1][y2] - a[x2][y1] + a[x1][y1];
          res[area] = max(res[area], sum);
        }
      }
    }
  }
  for (int i = 0; i < n * n; i++)
    res[i + 1] = max(res[i + 1], res[i]);

  int q;
  cin >> q;
  for (int z = 0; z < q; z++) {
    int p;
    cin >> p;
    cout << res[p] << endl;
  }
}