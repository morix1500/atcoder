#include <bits/stdc++.h>
using namespace std;

int main() {
  int t, n;
  cin >> t >> n;
  vector<int> a(n);

  queue<int> tako;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    tako.push(a[i]);
  }

  int m;
  cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; i++)
    cin >> b[i];

  int cnt = 0;
  for (int i = 0; i < m; i++) {
    while (!tako.empty()) {
      int target = tako.front();
      tako.pop();
      if (b[i] <= target + t && b[i] >= target) {
        cnt++;
        break;
      }
    }
    if (tako.empty()) { break; }
  }
  cout << (cnt == m ? "yes" : "no") << endl;
}