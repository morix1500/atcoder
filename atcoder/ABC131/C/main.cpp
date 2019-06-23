#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main() {
  ll A, B, C, D;
  cin >> A >> B >> C >> D;
  A--;

  ll l    = lcm(C, D);
  ll ac   = A / C;
  ll ad   = A / D;
  ll al   = A < l ? 0 : A / l;
  ll ansA = A - (ac + ad - al);

  ll bc   = B / C;
  ll bd   = B / D;
  ll bl   = B < l ? 0 : B / l;
  ll ansB = B - (bc + bd - bl);

  cout << ansB - ansA << endl;
}