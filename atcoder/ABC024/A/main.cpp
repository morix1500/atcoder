#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, k, s, t;
  cin >> a >> b >> c >> k >> s >> t;

  int sum = 0;
  sum += (a * s) + (b * t);
  if (s + t >= k) { sum -= (s + t) * c; }
  cout << sum << endl;
}