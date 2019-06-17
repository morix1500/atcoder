#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, k;
  cin >> n >> k;
  vector<pair<ll, ll>> s;
  bool preOne  = false;
  int oneIndex = 0;
  bool zero    = false;
  for (int i = 0; i < n; i++) {
    ll tmp;
    cin >> tmp;
    if (tmp == 0) {
      zero = true;
      continue;
    }
    if (tmp == 1) {
      if (!preOne) {
        s.push_back(make_pair(tmp, 1));
        preOne   = true;
        oneIndex = s.size() - 1;
      } else {
        s[oneIndex].second++;
      }
    } else {
      preOne = false;
      s.push_back(make_pair(tmp, 1));
    }
  }
  if (zero) {
    cout << n << endl;
    return 0;
  }

  ll mx = 0;
  for (int i = 0; i < s.size(); i++) {
    ll sum = 1;
    ll cnt = 0;
    for (int j = i; j < s.size(); j++) {
      if (sum * s[j].first <= k) {
        cnt += s[j].second;
        sum *= s[j].first;
        mx = max(mx, cnt);
      } else {
        mx  = max(mx, cnt);
        cnt = 0;
        sum = 1;
        break;
      }
    }
  }
  cout << mx << endl;
}