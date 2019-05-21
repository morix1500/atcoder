#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, y;
  cin >> n >> y;

  for (ll i = 0; i <= n; i++) {
    for (ll j = 0; j <= n; j++) {
      if (i + j > n) continue;
      ll z = n - i - j;
      if (y == (i * 10000 + j * 5000 + z * 1000)) {
        printf("%lld %lld %lld\n", i, j, z);
        return 0;
      }
    }
  }
  cout << "-1 -1 -1" << endl;
}