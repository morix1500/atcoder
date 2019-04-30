#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, t, a;
  cin >> n >> t >> a;
  vector<int> h(n);

  for (int i = 0; i < n; i++)
    cin >> h[i];

  double mn = (1 << 21);
  int res   = 0;
  for (int i = 0; i < n; i++) {
    double tmp = abs(a - (t - h[i] * 0.006));
    if (mn > tmp) {
      mn  = tmp;
      res = i;
    }
  }
  cout << res + 1 << endl;
}