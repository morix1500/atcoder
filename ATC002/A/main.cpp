#include <bits/stdc++.h>
using namespace std;

int main() {
  int R, C;
  cin >> R >> C;

  int sy, sx, gy, gx;
  cin >> sy >> sx >> gy >> gx;
  sy--;
  sx--;
  gy--;
  gx--;

  vector<string> c(R);
  for (int i = 0; i < R; i++) {
    cin >> c.at(i);
  }

  queue<pair<int, int>> q;
  queue<int> q2;

  int x = sx;
  int y = sy;
  q.push(make_pair(x, y));
  q2.push(0);

  int cnt = 0;
  int res = 1000000000;

  while (!q.empty()) {
    pair<int, int> next = q.front();
    x                   = next.first;
    y                   = next.second;
    cnt                 = q2.front();
    q.pop();
    q2.pop();

    if (x == gx && y == gy) {
      res = min(res, cnt);
      continue;
    }

    if (x == 0 || x == C - 1 || y == 0 || y == R - 1 || c.at(y).at(x) == '#') {
      continue;
    }
    c.at(y).at(x) = '#';
    cnt++;

    if (c.at(y).at(x + 1) == '.') {
      q.push(make_pair(x + 1, y));
      q2.push(cnt);
    }
    if (c.at(y).at(x - 1) == '.') {
      q.push(make_pair(x - 1, y));
      q2.push(cnt);
    }
    if (c.at(y + 1).at(x) == '.') {
      q.push(make_pair(x, y + 1));
      q2.push(cnt);
    }
    if (c.at(y - 1).at(x) == '.') {
      q.push(make_pair(x, y - 1));
      q2.push(cnt);
    }
  }

  cout << res << endl;
}