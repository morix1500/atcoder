#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, x;
  cin >> n >> m >> x;
  x--;
  map<int, int> a;
  for (int i = 0; i < m; i++) {
    int tmp;
    cin >> tmp;
    tmp--;
    if (a[tmp] == 0) { a[tmp]++; }
  }

  int cost1 = 0;
  for (int i = x - 1; i >= 0; i--) {
    if (a[i] == 1) { cost1++; }
  }
  int cost2 = 0;
  for (int i = x + 1; i < n; i++) {
    if (a[i] == 1) { cost2++; }
  }
  cout << min(cost1, cost2) << endl;
}