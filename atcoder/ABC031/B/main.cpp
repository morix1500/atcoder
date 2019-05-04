#include <bits/stdc++.h>
using namespace std;

int main() {
  int l, h, n;
  cin >> l >> h >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  for (int i = 0; i < n; i++) {
    if (h < a[i]) {
      cout << -1 << endl;
    } else {
      if (l <= a[i] && h >= a[i]) {
        cout << 0 << endl;
      } else {
        cout << l - a[i] << endl;
      }
    }
  }
}