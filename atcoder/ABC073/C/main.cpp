#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  map<int, int> m;
  for (int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    if (m[tmp] == 0) {
      m[tmp]++;
    } else {
      m[tmp]--;
    }
  }
  int cnt = 0;
  for (auto v : m) {
    if (v.second == 1) cnt++;
  }
  cout << cnt << endl;
}