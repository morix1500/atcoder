#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k, x, y;
  cin >> n >> k >> x >> y;

  int cnt = 0;
  for (int i = 1; i <= n; i++) {
    if (i <= k) {
      cnt += x;
    } else {
      cnt += y;
    }
  }
  cout << cnt << endl;
}