#include <bits/stdc++.h>
using namespace std;

struct Point {
  int x = 0, y = 0;
  int cnt = 0;
};

int main() {
  int r, c;
  cin >> r >> c;

  Point s;
  cin >> s.y >> s.x;
  s.y--;
  s.x--;

  Point g;
  cin >> g.y >> g.x;
  g.y--;
  g.x--;

  vector<string> m(r);
  for (int i = 0; i < r; i++) {
    cin >> m[i];
  }

  queue<Point> q;
  q.push(s);

  int mn = INT_MAX;
  while (!q.empty()) {
    Point now = q.front();
    q.pop();

    if (now.x == g.x && now.y == g.y) {
      mn = min(mn, now.cnt);
      continue;
    }
    if (m[now.y][now.x] == '#') continue;
    m[now.y][now.x] = '#';

    if (now.x != 0) q.push(Point{x : now.x - 1, y : now.y, cnt : now.cnt + 1});
    if (now.x != c - 1)
      q.push(Point{x : now.x + 1, y : now.y, cnt : now.cnt + 1});
    if (now.y != 0) q.push(Point{x : now.x, y : now.y - 1, cnt : now.cnt + 1});
    if (now.y != r - 1) q.push(Point{x : now.x, now.y + 1, cnt : now.cnt + 1});
  }
  cout << mn << endl;
}