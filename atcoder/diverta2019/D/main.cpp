#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  vector<ll> div;
  for (ll i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      div.push_back(i);
      if (i * i != n) div.push_back(n / i);
    }
  }
  ll sum = 0;
  for (ll i = 0; i < div.size(); i++) {
    ll tmp = div[i] - 1;
    if (tmp == 0) continue;
    if ((n / tmp) == (n % tmp)) { sum += tmp; }
  }
  cout << sum << endl;
}