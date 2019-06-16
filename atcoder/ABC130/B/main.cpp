#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> l(n);
  for (int i = 0; i < n; i++)
    cin >> l[i];

  vector<int> d(n + 1);
  for (int i = 1; i <= n; i++) {
    d[i] = d[i - 1] + l[i - 1];
  }
  for (int i = 0; i <= n; i++) {
    if (d[i] > x) {
      cout << i << endl;
      return 0;
    }
  }
  cout << n + 1 << endl;
}