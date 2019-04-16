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

  vector<pair<int, int>> q(10000);
  vector<int> q2(10000);
  int top  = 0;
  int last = 0;

  int x             = sx;
  int y             = sy;
  q.at(last).first  = x;
  q.at(last).second = y;
  last++;
  int cnt = 0;
  vector<int> res;

  while (last - top > 0) {
    pair<int, int> next = q.at(top);
    x                   = next.first;
    y                   = next.second;
    cnt                 = q2.at(top);
    top++;

    if (x == gx && y == gy) {
      res.push_back(cnt);
      continue;
    }

    if (x == 0 || x == C - 1 || y == 0 || y == R - 1 || c.at(y).at(x) == '#') {
      continue;
    }
    c.at(y).at(x) = '#';
    cnt++;

    if (c.at(y).at(x + 1) == '.') {
      q.at(last).first  = x + 1;
      q.at(last).second = y;
      q2.at(last)       = cnt;
      last++;
    }
    if (c.at(y).at(x - 1) == '.') {
      q.at(last).first  = x - 1;
      q.at(last).second = y;
      q2.at(last)       = cnt;
      last++;
    }
    if (c.at(y + 1).at(x) == '.') {
      q.at(last).first  = x;
      q.at(last).second = y + 1;
      q2.at(last)       = cnt;
      last++;
    }
    if (c.at(y - 1).at(x) == '.') {
      q.at(last).first  = x;
      q.at(last).second = y - 1;
      q2.at(last)       = cnt;
      last++;
    }
  }
  int min = 1000000000;
  for (int i = 0; i < res.size(); i++) {
    if (min > res.at(i)) { min = res.at(i); }
  }
  cout << min << endl;
}