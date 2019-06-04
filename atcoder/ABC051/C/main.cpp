#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int sx, sy, gx, gy;
  cin >> sx >> sy >> gx >> gy;

  int dx = gx - sx;
  int dy = gy - sy;

  string r1, r2, r3, r4;

  // s to g
  r1 = string(dy, 'U') + string(dx, 'R');
  // g to s
  r2 = string(dy, 'D') + string(dx, 'L');
  // s to g
  r3 = string(1, 'L') + string(dy + 1, 'U') + string(dx + 1, 'R') +
       string(1, 'D');
  // g to s
  r4 = string(1, 'R') + string(dy + 1, 'D') + string(dx + 1, 'L') +
       string(1, 'U');

  cout << r1 << r2 << r3 << r4 << endl;
  // cout << dx << " " << dy << endl;
  // cout << r1 << endl;
  // cout << r2 << endl;
  // cout << r3 << endl;
  // cout << r4 << endl;
}
