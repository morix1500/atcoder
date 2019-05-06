#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(m);
  for (int i = 0; i < m; i++)
    cin >> a[i];

  if (n >= m) {
    cout << 0 << endl;
    return 0;
  }
  sort(a.begin(), a.end());
  vector<long long> diffs;
  for (int i = 1; i < a.size(); i++) {
    diffs.push_back(a[i] - a[i - 1]);
  }
  sort(diffs.begin(), diffs.end(), greater<long long>());

  long long res = a.back() - a[0];
  for (int i = 0; i < min((int)diffs.size(), n - 1); i++) {
    res -= diffs[i];
  }
  cout << res << endl;
}