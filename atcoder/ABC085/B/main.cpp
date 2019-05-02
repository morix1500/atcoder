#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> d(n);
  for (int i = 0; i < n; i++)
    cin >> d[i];

  sort(d.begin(), d.end(), greater<int>());

  int cnt = 1;
  int pre = d[0];
  for (int i = 1; i < n; i++) {
    if (pre <= d[i]) { continue; }
    pre = d[i];
    cnt++;
  }
  cout << cnt << endl;
}