#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int desCnt = 0;
  sort(a.begin(), a.end());
  while (true) {
    sort(a.begin(), a.end());
    for (int i = 1; i < n; i++) {
      if (a[i] == INT_MAX) continue;
      a[i] = a[i] % a[0];
      if (a[i] == 0) {
        desCnt++;
        a[i] = INT_MAX;
      }
    }
    if (desCnt == n - 1) break;
  }
  cout << a[0] << endl;
}