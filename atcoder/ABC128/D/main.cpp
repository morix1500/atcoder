#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, k;

ll dfs(vector<ll> &d, vector<ll> &v, ll sum, ll cnt) {
  if (cnt > k) return 0;
  if (cnt == k) return sum;
  ll ret1 = 0, ret2 = 0, ret3 = 0, ret4 = 0;
  if (d.size() > 0) {
    vector<ll> d1 = d;
    ll tmp        = d1[0];
    d1.erase(d1.begin());
    v.push_back(tmp);
    ret1 = dfs(d1, v, sum + tmp, cnt + 1);
  }
  if (d.size() > 0) {
    vector<ll> d2 = d;
    ll tmp        = d2[d2.size() - 1];
    d2.erase(d2.end() - 1);
    v.push_back(tmp);
    ret2 = dfs(d2, v, sum + tmp, cnt + 1);
  }
  if (v.size() > 0) {
    sort(v.begin(), v.end());

    vector<ll> d3 = d;
    d3.insert(d3.begin(), {v[v.size() - 1]});
    ll tmp = v[v.size() - 1];
    v.erase(v.begin());
    ret3 = dfs(d3, v, sum - tmp, cnt + 1);

    vector<ll> d4 = d;
    d4.push_back(v[0]);
    tmp = v[0];
    v.erase(v.end() - 1);
    ret4 = dfs(d4, v, sum - tmp, cnt + 1);
  }

  return max(ret1, max(ret2, max(ret3, ret4)));
}

int main() {
  cin >> n >> k;
  vector<ll> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];

  vector<ll> V;
  cout << dfs(v, V, 0, 0) << endl;
}