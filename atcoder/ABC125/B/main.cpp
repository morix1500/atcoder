#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<pair<int, int>> m(n);
  for (int i = 0; i < n; i++) {
    cin >> m[i].first;
  }
  for (int i = 0; i < n; i++) {
    cin >> m[i].second;
  }
  int res = 0;
  for (int i = 0; i < n; i++) {
    if (m[i].first > m[i].second) { res += m[i].first - m[i].second; }
  }
  cout << res << endl;
}