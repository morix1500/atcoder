#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  int cnt = 0;
  for (int i = 1; i <= a; i++) {
    for (int j = 1; j <= 31; j++) {
      if (i > a) break;
      if (i >= a && b < j) break;
      if (i == j) cnt++;
    }
  }
  cout << cnt << endl;
}