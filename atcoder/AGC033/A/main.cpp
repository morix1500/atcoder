#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> a(h);
  for (int i = 0; i < h; i++)
    cin >> a[i];

  queue<pair<int, int>> q;
  queue<int> q2;

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (a[i][j] == '#') {
        q.push(make_pair(i, j));
        q2.push(0);
      }
    }
  }

  int mx  = 0;
  int cnt = 0;

  while (!q.empty()) {
    pair<int, int> p = q.front();
    q.pop();
    cnt = q2.front();
    q2.pop();

    int x = p.first;
    int y = p.second;

    if (cnt != 0 && a[x][y] == '#') continue;
    mx      = max(mx, cnt);
    a[x][y] = '#';
    cnt++;

    if (x != 0 && a[x - 1][y] == '.') {
      q.push(make_pair(x - 1, y));
      q2.push(cnt);
    }
    if (x != h - 1 && a[x + 1][y] == '.') {
      q.push(make_pair(x + 1, y));
      q2.push(cnt);
    }
    if (y != 0 && a[x][y - 1] == '.') {
      q.push(make_pair(x, y - 1));
      q2.push(cnt);
    }
    if (y != w - 1 && a[x][y + 1] == '.') {
      q.push(make_pair(x, y + 1));
      q2.push(cnt);
    }
  }
  cout << mx << endl;
}
