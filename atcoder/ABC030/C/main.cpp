#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, m, x, y;
  cin >> n >> m >> x >> y;
  vector<ll> a(n), b(m);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < m; i++)
    cin >> b[i];

  int i   = 0;
  int j   = 0;
  int cnt = 0;
  int t   = 0;
  while (i < n) {
    while (i < n && t > a[i]) {
      i++;
    }
    if (t > a[i]) break;
    t = a[i];
    t += x;
    while (j < m && t > b[j]) {
      j++;
    }
    if (t > b[j]) break;
    t = b[j];
    t += y;
    cnt++;
  }
  cout << cnt << endl;
}