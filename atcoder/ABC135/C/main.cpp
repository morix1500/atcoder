#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<int> a(n + 1), b(n);

  for (int i = 0; i <= n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }

  ll sum = 0;
  for (int i = 0; i < n; i++) {
    int c = min(a[i], b[i]);
    a[i] -= c;
    b[i] -= c;
    sum += c;

    int d = min(a[i + 1], b[i]);
    a[i + 1] -= d;
    b[i] -= d;
    sum += d;
  }
  cout << sum << endl;
}