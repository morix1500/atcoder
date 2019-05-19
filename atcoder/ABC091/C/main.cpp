#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n), b(n), c(n), d(n);
  vector<pair<int, int>> cd;
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> c[i] >> d[i];
    cd.push_back(make_pair(c[i], i));
  }

  sort(cd.begin(), cd.end());

  int cnt = 0;
  map<int, int> m;
  for (int i = 0; i < n; i++) {
    int bx = c[cd[i].second], by = d[cd[i].second];
    int mx      = -1;
    int mnIndex = -1;

    for (int j = 0; j < n; j++) {
      if (m[j]) continue;
      int rx = a[j], ry = b[j];
      if (rx < bx && ry < by) {
        if (mx < ry) {
          mx      = ry;
          mnIndex = j;
        }
      }
    }
    if (mnIndex != -1) {
      cnt++;
      m[mnIndex]++;
    }
  }
  cout << cnt << endl;
}