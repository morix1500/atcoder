#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int x;
  cin >> x;

  int mx = 0;
  for (int i = x; i >= 0; i--) {
    for (int j = 2; j <= 10; j++) {
      int tmp = pow(i, j);
      if (tmp > x) break;
      mx = max(mx, tmp);
    }
  }
  cout << mx << endl;
}