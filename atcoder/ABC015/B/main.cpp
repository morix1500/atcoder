#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);

  int sum = 0;
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] != 0) {
      cnt++;
      sum += a[i];
    }
  }
  int res = ceil(double(sum) / double(cnt));
  cout << res << endl;
}