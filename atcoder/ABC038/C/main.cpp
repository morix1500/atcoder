#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  ll r   = 1;
  ll cnt = 0;
  for (ll l = 0; l < n; l++) {
    while (r < n && (r <= l || a[r - 1] < a[r])) {
      r++;
    }
    cnt += (r - l);
    if (l == r) r++;
  }

  cout << cnt << endl;
}