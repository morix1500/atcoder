#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> x(n);
  for (int i = 0; i < n; i++)
    cin >> x[i];

  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += min(abs(x[i] * 2), abs((k - x[i]) * 2));
  }
  cout << sum << endl;
}