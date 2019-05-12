#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n;
vector<ll> a;

int main() {
  cin >> n;
  a.resize(n);
  for (ll i = 0; i < n; i++) {
    cin >> a[i];
  }
  ll sum = 0;
  for (ll i = 0; i < n; i++) {
    sum += (a[i] - 1);
  }
  cout << sum << endl;
}