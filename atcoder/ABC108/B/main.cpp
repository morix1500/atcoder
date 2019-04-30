#include <bits/stdc++.h>
using namespace std;

int main() {
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;

  int x3, y3, x4, y4, hen;
  hen = y2 - y1;
  x3  = x2 - (y2 - y1);
  y3  = y2 + (x2 - x1);
  x4  = x1 - hen;
  y4  = y3 - hen;
  printf("%d %d %d %d\n", x3, y3, x4, y4);
}