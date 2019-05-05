#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  double x1, y1, x2, y2;

  // 最小の角度
  double l  = 360.0 / 60.0;
  double l2 = 360.0 / 12.0 / 60.0;
  double s  = 360.0 / 12.0;
  if (n > 12) n -= 12;

  double nk = n * s + m * l2;
  double mk = m * l;
  if (nk - mk > 180.0 || -180.0 > nk - mk) {
    cout << 360.0 - abs(nk - mk) << endl;
  } else {
    cout << abs(nk - mk) << endl;
  }
}