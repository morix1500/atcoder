#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> x(n);
  for (int i = 0; i < n; i++) {
    cin >> x[i];
  }
  int mn = INT_MAX;
  for (int i = 0; i + k - 1 < n; i++) {
    int left = x[i], right = x[i + k - 1];
    mn = min(mn, min(abs(left), abs(right)) + right - left);
  }

  cout << mn << endl;
}