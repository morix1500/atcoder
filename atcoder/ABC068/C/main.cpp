#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, m;
bool dfs(vector<vector<ll>> &A, ll now, int cnt) {
  if (cnt > 2) return false;
  bool res = false;
  for (int i = 0; i < A[now].size(); i++) {
    if (cnt == 2 && A[now][i] == n - 1) return true;
    if (dfs(A, A[now][i], cnt + 1)) {
      res = true;
      break;
    }
  }

  return res;
}

int main() {
  cin >> n >> m;
  vector<vector<ll>> A(n);
  for (int i = 0; i < m; i++) {
    ll a, b;
    cin >> a >> b;
    a--;
    b--;
    A[a].push_back(b);
  }

  cout << (dfs(A, 0, 1) ? "POSSIBLE" : "IMPOSSIBLE") << endl;
}