#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  vector<pair<int, int>> m(100000);

  for (int i = 0; i < n; i++) {
    cin >> v[i];
    m[v[i]].first++;
    m[v[i]].second = i;
  }
  sort(m.begin(), m.end(), greater<pair<int, int>>());
  int index = 0;
  int s1    = 0;
  int s2    = 0;

  for (auto p : m) {
    if (index == 0)
      s1 = p.second;
    else if (index == 1)
      s2 = p.second;
    else
      break;
    index++;
  }

  vector<int> a(n);
  vector<int> b(n);
  for (int i = 0; i < n; i += 2) {
    a[i]     = v[s1];
    a[i + 1] = v[s2] == v[s1] ? -1 : v[s2];
    b[i]     = v[s2] == v[s1] ? -1 : v[s2];
    b[i + 1] = v[s1];
  }

  int cnt = 0, cnt2 = 0;
  for (int i = 0; i < n; i++) {
    if (v[i] != a[i]) cnt++;
    if (v[i] != b[i]) cnt2++;
  }
  cout << min(cnt, cnt2) << endl;
}