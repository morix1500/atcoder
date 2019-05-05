#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int h, m, s;
  if (n >= 3600) {
    h = n / 3600;
    n -= (3600 * h);
  }
  if (n >= 60) {
    m = n / 60;
    n -= (60 * m);
  }
  s = n;
  printf("%02d:%02d:%02d\n", h, m, s);
}