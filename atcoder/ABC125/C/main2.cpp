#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  vector<int> l(n + 1);
  vector<int> r(n + 1);
  for (int i = 0; i < n; i++) {
    l[i + 1] = gcd(a[i], l[i]);
  }
  for (int i = n - 1; i >= 0; i--) {
    r[i] = gcd(a[i], r[i + 1]);
  }
  int mx = 0;
  for (int i = 0; i < n; i++) {
    mx = max(mx, gcd(l[i], r[i + 1]));
  }
  cout << mx << endl;
}