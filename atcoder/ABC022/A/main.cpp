#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, s, t;
  cin >> n >> s >> t;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  int cnt = 0;
  int w   = 0;
  for (int i = 0; i < n; i++) {
    w += a[i];
    if (w >= s && w <= t) { cnt++; }
  }
  cout << cnt << endl;
}