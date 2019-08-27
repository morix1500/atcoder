#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  map<string, ll> m;
  for (int i = 0; i < n; i++) {
    cin >> s[i];
    sort(s[i].begin(), s[i].end());
    m[s[i]]++;
  }
  ll cnt = 0;
  for (auto v : m) {
    cnt += (v.second * (v.second - 1) / 2);
  }
  cout << cnt << endl;
}