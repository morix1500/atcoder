#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
static const ll M = 1000000007;

ll factorial(ll n) {
  if (n == 0) return 1;
  return ((n % M) * (factorial(n - 1) % M)) % M;
}

int main() {
  ll n, m;
  cin >> n >> m;
  if (abs(n - m) > 1) {
    cout << 0 << endl;
    return 0;
  }
  ll x = factorial(n);
  ll y = factorial(m);
  ll z = (x * y) % M;
  if (n == m) { z *= 2; }
  cout << z % M << endl;
}