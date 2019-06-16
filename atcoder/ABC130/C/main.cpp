#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  double W, H, x, y;
  cin >> W >> H >> x >> y;

  cout << fixed << setprecision(9) << W * H / 2.0;
  cout << " " << (x + x == W && y + y == H ? 1 : 0) << endl;
}
