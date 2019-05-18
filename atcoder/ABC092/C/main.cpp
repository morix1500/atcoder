#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);

  int s = 0;
  int p = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    s += abs(p - a[i]);
    p = a[i];
  }
  s += abs(p);

  for (int i = 0; i < n; i++) {
    int sum = s;

    if (i == 0) {
      int af = abs(a[i] - a[i + 1]);
      af += abs(a[i]);
      sum -= af;

      sum += abs(a[i + 1]);
    } else if (i == n - 1) {
      int be = abs(a[i - 1] - a[i]);
      be += abs(a[i]);
      sum -= be;

      sum += abs(a[i - 1]);
    } else {
      int af = abs(a[i] - a[i + 1]);
      int be = abs(a[i - 1] - a[i]);
      sum -= af + be;

      sum += abs(a[i - 1] - a[i + 1]);
    }
    cout << sum << endl;
  }
}