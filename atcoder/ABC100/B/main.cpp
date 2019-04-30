#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll d, n;
  cin >> d >> n;

  ll cnt = 0;
  for (ll i = 1; i <= 10000 * 100 + 10000; i++) {
    if (d == 0) {
      if (i % 100 != 0) { cnt++; }
    } else if (d == 1) {
      if (i % 100 == 0 && i % 10000 != 0) { cnt++; }
    } else {
      if (i % 10000 == 0 && i % 1000000 != 0) { cnt++; }
    }
    if (cnt == n) {
      cout << i << endl;
      break;
    }
  }
}