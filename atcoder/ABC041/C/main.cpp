#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;
  vector<pair<ll, ll>> a(n);
  for (int i = 0; i < n; i++) {
    ll tmp;
    cin >> tmp;
    a[i] = make_pair(tmp, i + 1);
  }
  sort(a.begin(), a.end(), greater<pair<ll, ll>>());

  for (int i = 0; i < n; i++) {
    cout << a[i].second << endl;
  }
}