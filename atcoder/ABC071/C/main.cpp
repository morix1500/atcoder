#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  map<ll, ll> m;
  for (int i = 0; i < n; i++) {
    ll tmp;
    cin >> tmp;
    m[tmp]++;
  }

  ll mx = 0, mx2 = 0;
  for (auto v : m) {
    if (v.second >= 4) {
      if (mx < v.first) {
        mx  = v.first;
        mx2 = v.first;
      }
    } else if (v.second >= 2) {
      if (mx < v.first) {
        mx2 = mx;
        mx  = v.first;
      } else if (mx2 < v.first) {
        mx2 = v.first;
      }
    }
  }
  cout << mx * mx2 << endl;
}