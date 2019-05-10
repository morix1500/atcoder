#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<ll> x(n), y(n), h(n);
  int index = -1;
  for (int i = 0; i < n; i++) {
    cin >> x[i] >> y[i] >> h[i];
    if (h[i] > 0) index = i;
  }

  ll rx = 0, ry = 0, rh = 0;
  for (int i = 0; i <= 100; i++) {
    for (int j = 0; j <= 100; j++) {
      ll H = h[index] + abs(i - x[index]) + abs(j - y[index]);
      if (!H) continue;
      bool res = true;
      for (int z = 0; z < n; z++) {
        if (h[z] != max(H - abs(x[z] - i) - abs(y[z] - j), 0LL)) {
          res = false;
          break;
        }
      }
      if (res && H > 0) {
        rx = i;
        ry = j;
        rh = H;
      }
    }
  }
  cout << rx << " " << ry << " " << rh << endl;
}