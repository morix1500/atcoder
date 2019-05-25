#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main() {
  ll n;
  cin >> n;
  vector<ll> T(n);
  ll s = 0;
  for (int i = 0; i < n; i++) {
    cin >> T[i];
    if (i > 0) {
      s = lcm(s, T[i]);
    } else {
      s = T[i];
    }
  }

  cout << s << endl;
}