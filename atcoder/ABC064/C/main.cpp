#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  map<string, ll> m;
  for (int i = 0; i < n; i++) {
    if (a[i] >= 3200) {
      m["other"]++;
    } else if (a[i] >= 2800) {
      m["red"]++;
    } else if (a[i] >= 2400) {
      m["daidai"]++;
    } else if (a[i] >= 2000) {
      m["yellow"]++;
    } else if (a[i] >= 1600) {
      m["blue"]++;
    } else if (a[i] >= 1200) {
      m["sky"]++;
    } else if (a[i] >= 800) {
      m["green"]++;
    } else if (a[i] >= 400) {
      m["cha"]++;
    } else if (a[i] >= 1) {
      m["gray"]++;
    }
  }
  ll cnt = 0;
  for (auto v : m) {
    if (v.first != "other") { cnt++; }
  }
  ll mx = cnt + m["other"];
  cnt   = max(cnt, 1LL);
  cout << cnt << " " << mx << endl;
}