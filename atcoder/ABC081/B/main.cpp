#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  int cnt  = 0;
  bool res = true;
  while (true) {
    for (int i = 0; i < n; i++) {
      if (a[i] % 2 == 1 || a[i] == 0) {
        res = false;
        break;
      } else {
        a[i] /= 2;
      }
    }
    if (!res) break;
    cnt++;
  }
  cout << cnt << endl;
}