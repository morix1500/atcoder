#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> a(n);

  int k = 0;
  for (int i = 0; i < n; i++) {
    cin >> k;

    for (int j = 0; j < k; j++) {
      int tmp;
      cin >> tmp;
      a[i].push_back(tmp);
    }
  }

  map<int, int> ma;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < a[i].size(); j++) {
      ma[a[i][j]]++;
    }
  }
  int cnt = 0;
  for (auto r : ma) {
    if (r.second == n) { cnt++; }
  }
  cout << cnt << endl;
}