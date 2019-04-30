#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  ll s = 0;
  ll a = n;
  while (true) {
    ll b = a % 10;
    s += b;
    if (a < 10) break;
    a -= b;
    a /= 10;
  }
  if (n % s == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}