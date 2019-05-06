#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n, m;
  cin >> n >> m;
  vector<pair<ll, ll>> a(n);
  for (int i = 0; i < n; i++) {
    ll A, B;
    cin >> A >> B;
    a[i] = make_pair(A, B);
  }

  sort(a.begin(), a.end());
  ll sum  = 0;
  int now = m;
  for (int i = 0; i < n; i++) {
    pair<ll, ll> p = a[i];
    if (now <= p.second) {
      sum += (p.first * now);
      now = 0;
    } else {
      sum += (p.first * p.second);
      now -= p.second;
    }
    if (now == 0) { break; }
  }
  cout << sum << endl;
}