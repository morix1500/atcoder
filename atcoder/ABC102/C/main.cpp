#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  for (ll i = 0; i < n; i++)
    cin >> a[i];

  vector<ll> b(n);
  for (ll i = 0; i < n; i++) {
    b[i] = a[i] - (i + 1);
  }
  sort(b.begin(), b.end());
  ll m      = b.size() / 2;
  ll median = b.size() % 2 == 0 ? (b[m] + b[m - 1]) / 2 : b[m];
  // nth_element(b.begin(), b.begin() + t, b.end());

  // ll mn = LLONG_MAX;
  ll sum  = 0;
  ll sum2 = 0;
  for (ll i = 0; i < n; i++) {
    sum += abs(a[i] - (median + (i + 1)));
    sum2 += abs(a[i] - (median * -1 + (i + 1)));
  }
  cout << min(sum, sum2) << endl;
}