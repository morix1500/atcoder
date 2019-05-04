#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int mn  = INT_MAX;
  int mx  = 0;
  int mn2 = INT_MAX;
  for (int a = 1; a <= n; a++) {
    for (int b = 1; b <= n; b++) {
      if (a * b > n) break;
      mn = min(mn, abs(a - b) + (n - (a * b)));
    }
  }

  cout << mn << endl;
}