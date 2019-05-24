#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  map<int, int> m;
  for (int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    m[tmp - 1]++;
    m[tmp]++;
    m[tmp + 1]++;
  }
  int mx = 0;
  for (auto k : m) {
    mx = max(mx, k.second);
  }
  cout << mx << endl;
}