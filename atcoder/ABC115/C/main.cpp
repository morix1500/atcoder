#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> h(n);
  for (int i = 0; i < n; i++)
    cin >> h[i];

  sort(h.begin(), h.end(), greater<int>());

  int mn = INT_MAX;
  for (int i = 0; i < n; i++) {
    if (i <= n - k) {
      int diff = h[i] - h[i + k - 1];
      if (mn > diff) { mn = diff; }
    }
  }
  cout << mn << endl;
}