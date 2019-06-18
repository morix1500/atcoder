#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  int mx = -INT_MAX;
  for (int i = 0; i < n; i++) {
    int aokiMax = -INT_MAX;
    int tmpAns  = 0;
    for (int j = 0; j < n; j++) {
      if (i == j) continue;
      int l     = min(i, j);
      int r     = max(i, j);
      int sum   = 0;
      int index = 1, taka = 0, ao = 0;
      for (int k = l; k <= r; k++) {
        if (index % 2 == 0) {
          ao += a[k];
        } else {
          taka += a[k];
        }
        index++;
      }
      if (ao > aokiMax) {
        aokiMax = ao;
        tmpAns  = taka;
      }
    }
    mx = max(mx, tmpAns);
  }
  cout << mx << endl;
}