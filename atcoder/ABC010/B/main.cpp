#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  int cnt = 0;
  for (int i = 0; i < n; i++) {
    while (true) {
      if (a[i] % 2 == 0 || a[i] % 5 == 0 || a[i] % 8 == 0) {
        a[i]--;
        cnt++;
      } else {
        break;
      }
    }
  }
  cout << cnt << endl;
}