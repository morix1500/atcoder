#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

using Edge  = pair<ll, ll>;
using Graph = vector<vector<Edge>>;

ll n;
Graph G;

vector<ll> color;

void dfs(ll v, ll p, ll c) {
  color[v] = c;
  for (auto e : G[v]) {
    if (e.first == p) continue;
    if (e.second % 2 == 1) {
      dfs(e.first, v, abs(1 - c));
    } else {
      dfs(e.first, v, c);
    }
  }
}

int main() {
  cin >> n;
  G.assign(n, vector<Edge>());

  for (int i = 0; i < n - 1; i++) {
    int u, v, w;
    cin >> u >> v >> w;
    u--;
    v--;
    G[u].push_back(Edge(v, w));
    G[v].push_back(Edge(u, w));
  }
  color.assign(n, 0);
  dfs(0, -1, 1);

  for (int i = 0; i < n; i++) {
    cout << color[i] << endl;
  }
}