#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  vector<ll> b(n);
  ll x   = 0;
  ll y   = n - 1;
  bool k = true;
  for (int i = n - 1; i >= 0; i--) {
    if (k) {
      b[x] = a[i];
      x++;
    } else {
      b[y] = a[i];
      y--;
    }
    k = !k;
  }

  for (int i = 0; i < n; i++) {
    cout << b[i];
    if (i != n - 1) { cout << " "; }
  }
  cout << endl;
}