#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> p(m), y(m);
  for (int i = 0; i < m; i++) {
    cin >> p[i] >> y[i];
    p[i]--;
  }

  vector<vector<pair<int, int>>> arr(n);

  map<int, int> ma;
  for (int i = 0; i < m; i++) {
    arr[p[i]].push_back(make_pair(y[i], i));
  }

  for (int i = 0; i < n; i++) {
    sort(arr[i].begin(), arr[i].end());
    for (int j = 0; j < arr[i].size(); j++) {
      y[arr[i][j].second] = j + 1;
    }
  }

  for (int i = 0; i < m; i++) {
    int no = p[i];
    printf("%06d%06d\n", no + 1, y[i]);
  }
}