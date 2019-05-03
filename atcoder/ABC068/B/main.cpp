#include <bits/stdc++.h>
using namespace std;

int dfs(int num) {
  if (num < 2) return 0;
  if (num % 2 == 1) return 0;

  return 1 + dfs(num / 2);
}

int main() {
  int n;
  cin >> n;
  int mx  = 0;
  int res = 0;
  for (int i = n; i >= 1; i--) {
    int tmp = dfs(i);
    if (mx < tmp) {
      res = i;
      mx  = tmp;
    }
  }
  if (n == 1) res = 1;
  cout << res << endl;
}