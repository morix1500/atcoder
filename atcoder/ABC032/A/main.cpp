#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, n;
  cin >> a >> b >> n;
  int res = 0;
  for (int i = n; i <= INT_MAX; i++) {
    if (i % a == 0 && i % b == 0) {
      res = i;
      break;
    }
  }
  cout << res << endl;
}