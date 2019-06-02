#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Point {
  ll x        = 0;
  bool sunuke = true;
};

int main() {
  ll n, a, b, c, d;
  cin >> n >> a >> b >> c >> d;
  a--;
  b--;
  c--;
  d--;
  string s;
  cin >> s;

  queue<Point> q;
  q.push({x : b, sunuke : false});

  bool res  = false;
  bool C    = false;
  bool D    = false;
  ll aNow   = a;
  ll bNow   = b;
  bool nowA = false;
  while (!q.empty()) {
    Point p = q.front();
    q.pop();
    if (nowA && !p.sunuke) continue;
    if (!nowA && p.sunuke) continue;
    if (p.x >= n || s[p.x] == '#') continue;
    if (nowA && p.x == bNow) continue;
    if (!nowA && p.x == aNow) continue;
    if (p.sunuke && C) continue;
    if (!p.sunuke && D) continue;
    if (C && D) break;

    if (p.sunuke) {
      aNow = p.x;
      if (p.x == c) {
        C = true;
        q.push({x : bNow + 1, sunuke : false});
        q.push({x : bNow + 2, sunuke : false});
        nowA = !nowA;
        continue;
      }
      if ((p.x <= n - 1 && (s[p.x + 1] == '#' || p.x + 1 == bNow)) &&
          (p.x <= n - 2 && (s[p.x + 2] == '#' || p.x + 2 == bNow))) {
        break;
      }
      if (aNow > bNow && p.x < n - 1 && s[p.x - 1] == '.' &&
          s[p.x + 1] == '.') {
        q.push({x : bNow + 1, sunuke : false});
        q.push({x : bNow + 2, sunuke : false});
        nowA = !nowA;
      } else {
        q.push({x : p.x + 1, sunuke : true});
        q.push({x : p.x + 2, sunuke : true});
      }
    }
    if (!p.sunuke) {
      bNow = p.x;
      if (p.x == d) {
        D = true;
        q.push({x : aNow + 1, sunuke : true});
        q.push({x : aNow + 2, sunuke : true});
        nowA = !nowA;
        continue;
      }
      if ((p.x <= n - 1 && (s[p.x + 1] == '#' || p.x + 1 == aNow)) &&
          (p.x <= n - 2 && (s[p.x + 2] == '#' || p.x + 2 == aNow))) {
        break;
      }
      if (bNow > aNow && p.x < n - 1 && s[p.x - 1] == '.' &&
          s[p.x + 1] == '.') {
        q.push({x : aNow + 1, sunuke : true});
        q.push({x : aNow + 2, sunuke : true});
        nowA = !nowA;

      } else {
        q.push({x : p.x + 1, sunuke : false});
        q.push({x : p.x + 2, sunuke : false});
      }
    }
  }
  cout << (C && D ? "Yes" : "No") << endl;
}