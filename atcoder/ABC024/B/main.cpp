#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, t;
  cin >> n >> t;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int sum = t;
  for (int i = n - 1; i > 0; i--) {
    int sa = a[i] - a[i - 1];
    if (sa < t) {
      sum += sa;
    } else {
      sum += t;
    }
  }
  cout << sum << endl;
}