#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll x;
  cin >> x;
  //   2
  // 3 1 4
  //   5
  //   6
  if (x <= 6) {
    cout << 1 << endl;
  } else if (x <= 11) {
    cout << 2 << endl;
  } else {
    ll z = x / 11;
    z *= 2;
    ll y = x % 11;
    if (y == 0) {
      cout << z << endl;
    } else {
      cout << (y <= 6 ? z + 1 : z + 2) << endl;
    }
  }
}