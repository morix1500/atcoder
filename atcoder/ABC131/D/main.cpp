#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;
  vector<ll> a(n), b(n);
  vector<pair<ll, ll>> ab(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
    ab[i] = make_pair(b[i], a[i]);
  }
  sort(ab.begin(), ab.end());
  ll close = 0;
  ll sum   = 0;
  for (int i = 0; i < n; i++) {
    if (close != ab[i].first) close = ab[i].first;
    sum += ab[i].second;
    if (sum > close) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}