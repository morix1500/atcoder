#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll a, b, x;
  cin >> a >> b >> x;
  if (a < b) {
    ll i = b / x + 1;
    ll j = 0;
    if (a != 0) j = (a - 1) / x + 1;
    cout << i - j << endl;

  } else {
    cout << (a % x == 0 ? 1 : 0) << endl;
  }
}