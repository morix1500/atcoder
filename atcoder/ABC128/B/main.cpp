#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;
  vector<tuple<string, ll, ll>> s;
  for (ll i = 0; i < n; i++) {
    string a;
    ll p;
    cin >> a >> p;
    s.push_back(make_tuple(a, p * -1, i + 1));
  }

  sort(s.begin(), s.end());

  for (int i = 0; i < n; i++) {
    cout << get<2>(s[i]) << endl;
  }
}