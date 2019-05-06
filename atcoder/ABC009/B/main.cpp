#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  map<int, int, greater<int>> a;
  for (int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    a[tmp]++;
  }

  int index = 1;
  int res   = 0;
  for (auto v : a) {
    if (index == 2) { res = v.first; }
    index++;
  }
  cout << res << endl;
}