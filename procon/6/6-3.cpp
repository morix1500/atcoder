#include <bits/stdc++.h>
using namespace std;

struct Point {
  double x, y;
};

void koch(int n, Point p1, Point p2) {
  if (n == 0) { return; }
  Point s, t, u;
  double th = M_PI * 60.0 / 180.0;

  s.x = (2.0 * p1.x + 1 * p2.x) / 3;
  s.y = (2.0 * p1.y + 1 * p2.y) / 3;
  t.x = (1.0 * p1.x + 2 * p2.x) / 3;
  t.y = (1.0 * p1.y + 2 * p2.y) / 3;
  u.x = (t.x - s.x) * cos(th) - (t.y - s.y) * sin(th) + s.x;
  u.y = (t.x - s.x) * sin(th) - (t.y - s.y) * cos(th) + s.y;

  koch(n - 1, p1, s);
  cout << s.x << " " << s.y << endl;
  koch(n - 1, s, u);
  cout << u.x << " " << u.y << endl;
  koch(n - 1, u, t);
  cout << t.x << " " << t.y << endl;
  koch(n - 1, t, p2);
}

int main() {
  int n;
  cin >> n;

  Point s;
  s.x = 0;
  s.y = 0;
  Point e;
  e.x = 100;
  e.y = 0;

  cout << s.x << " " << s.y << endl;
  koch(n, s, e);
  cout << e.x << " " << e.y << endl;
}