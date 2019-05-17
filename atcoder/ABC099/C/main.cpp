#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> memo(100000);

ll dfs(ll num) {
  if (num < 0) {
    return 1000000;
  } else if (num == 0) {
    return 0;
  } else if (num < 6) {
    return num;
  }
  if (memo[num] > 0) return memo[num];
  ll res = LLONG_MAX;
  for (ll i = 1; i <= num; i *= 6)
    res = min(res, 1 + dfs(num - i));
  for (ll i = 1; i <= num; i *= 9)
    res = min(res, 1 + dfs(num - i));

  return memo[num] = res;
}

int main() {
  ll n;
  cin >> n;

  cout << dfs(n) << endl;
}