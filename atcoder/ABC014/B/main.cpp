#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  int sum   = 0;
  int index = 0;
  int last  = pow(2, n);
  for (int i = 1; i <= last; i += i) {
    if (x & i) { sum += a[index]; }
    index++;
  }
  cout << sum << endl;
}