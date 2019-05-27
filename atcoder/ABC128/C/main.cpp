#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> k(m), p(m);
  vector<vector<int>> s(m);
  for (int i = 0; i < m; i++) {
    cin >> k[i];
    for (int j = 0; j < k[i]; j++) {
      int tmp;
      cin >> tmp;
      tmp--;
      s[i].push_back(tmp);
    }
  }
  for (int i = 0; i < m; i++) {
    cin >> p[i];
  }

  int ans = 0;
  for (int z = 1; z <= (1 << n); z++) {
    bool res = true;
    for (int i = 0; i < m; i++) {
      int cnt = 0;
      for (int j = 0; j < k[i]; j++) {
        int tmp = 1 << s[i][j];
        if (z & (1 << s[i][j])) { cnt++; }
      }
      if (cnt % 2 != p[i]) { res = false; }
    }
    if (res) { ans++; }
  }
  cout << ans << endl;
}