#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(n);
  for (int i = 0; i < n; i++)
    cin >> a[i] >> b[i];
  vector<int> c(m), d(m);
  for (int i = 0; i < m; i++)
    cin >> c[i] >> d[i];

  for (int i = 0; i < n; i++) {
    int mn      = INT_MAX;
    int mnIndex = 0;
    for (int j = 0; j < m; j++) {
      int tmp = abs(a[i] - c[j]) + abs(b[i] - d[j]);
      if (mn > tmp) {
        mn      = tmp;
        mnIndex = j + 1;
      }
    }
    cout << mnIndex << endl;
  }
}