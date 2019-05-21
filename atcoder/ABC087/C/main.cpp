#include <bits/stdc++.h>
using namespace std;

struct Point {
  int x = 0, y = 0;
  int cnt = 0;
};

int main() {
  int n;
  cin >> n;
  vector<vector<int>> a(2, vector<int>(n));
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }

  queue<Point> q;
  q.push({});

  int mx = 0;
  while (!q.empty()) {
    Point p = q.front();
    q.pop();

    if (p.x >= n || p.y > 1) continue;

    p.cnt += a[p.y][p.x];

    if (p.y == 1 && p.x == n - 1) {
      mx = max(mx, p.cnt);
      continue;
    }
    if (p.x < n) { q.push({x : p.x + 1, y : p.y, cnt : p.cnt}); }
    if (p.y < 2) { q.push({x : p.x, y : p.y + 1, cnt : p.cnt}); }
  }
  cout << mx << endl;
}