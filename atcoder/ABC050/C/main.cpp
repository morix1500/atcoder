#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  map<ll, ll> m;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    m[a[i]]++;
  }
  ll M      = 1000000007;
  ll ans    = 1;
  bool even = n % 2 == 0 ? true : false;
  map<ll, ll> checker;
  for (int i = 0; i < n; i++) {
    if (i == 0 && even) continue;
    checker[i]++;
    i++;
  }
  int oneCnt = 0;
  for (auto v : m) {
    if (v.second > 2) {
      cout << 0 << endl;
      return 0;
    }
    if (v.second == 1) {
      if (even || oneCnt >= 1) {
        cout << 0 << endl;
        return 0;
      } else {
        if (v.first != 0) {
          cout << 0 << endl;
          return 0;
        }
        oneCnt++;
      }
    } else if (v.second != 2) {
      cout << 0 << endl;
      return 0;
    }
    if (checker[v.first] == 0) {
      cout << 0 << endl;
      return 0;
    }
    ans = (ans % M) * (v.second % M);
  }
  if (oneCnt == 0 && !even) {
    cout << 0 << endl;
  } else {
    cout << ans % M << endl;
  }
}