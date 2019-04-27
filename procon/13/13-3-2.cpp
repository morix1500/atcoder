#include <bits/stdc++.h>
using namespace std;
static const int INF   = (1 << 21);
static const int WHITE = 0;
static const int GRAY  = 1;
static const int BLACK = 2;
static const int NIL   = -1;
static const int MAX   = 10000;

int n;
vector<vector<pair<int, int>>> M(MAX);

void dijstra(int s) {
  vector<int> color(n, WHITE);
  vector<int> d(n, INF);
  d[s] = 0;
  priority_queue<pair<int, int>> pq;
  pq.push(make_pair(0, 0));

  while (!pq.empty()) {
    pair<int, int> tmp = pq.top();
    pq.pop();

    int u    = tmp.second;
    color[u] = BLACK;
    if (d[u] < tmp.first * (-1)) continue;

    int size = M[u].size();
    for (int i = 0; i < size; i++) {
      int v = M[u][i].second;
      if (color[v] == BLACK) continue;

      if (d[u] + M[u][i].first < d[v]) {
        d[v]     = d[u] + M[u][i].first;
        color[v] = GRAY;
        pq.push(make_pair(d[v] * (-1), v));
      }
    }
  }
  int res = 0;
  for (int i = 0; i < n; i++) {
    cout << i << " " << d[i] << endl;
  }
}

int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    int id, k;
    cin >> id >> k;
    for (int j = 0; j < k * 2; j += 2) {
      pair<int, int> p;
      cin >> p.second >> p.first;
      M[id].push_back(p);
    }
  }
  dijstra(0);
}