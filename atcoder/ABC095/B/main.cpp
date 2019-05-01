#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> m(n);
  int sum = 0;
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    cin >> m[i];
    sum += m[i];
    cnt++;
  }
  sort(m.begin(), m.end());
  x -= sum;

  while (x >= m[0]) {
    x -= m[0];
    cnt++;
  }
  cout << cnt << endl;
}