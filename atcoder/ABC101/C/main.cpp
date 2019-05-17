#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  int mn = INT_MAX;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    mn = min(mn, a[i]);
  }
  bool c    = true;
  int cnt   = 0;
  int index = 0;
  for (int i = 0; i < n; i++) {
    if (index > 0 && index % k == 0) {
      c = true;
      i--;
    }
    if (c && a[i] != mn) {
      cnt++;
      a[i] = mn;
      c    = false;
    }
    index++;
  }

  cout << cnt << endl;
}