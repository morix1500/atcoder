#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, T;
  cin >> n >> T;
  vector<int> c(n), t(n);
  for (int i = 0; i < n; i++) {
    cin >> c[i] >> t[i];
  }

  int res = (1 << 21);
  for (int i = 0; i < n; i++) {
    if (t[i] <= T) { res = min(res, c[i]); }
  }
  if (res == (1 << 21)) {
    cout << "TLE" << endl;
  } else {
    cout << res << endl;
  }
}