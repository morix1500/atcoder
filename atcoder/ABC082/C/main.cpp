#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  map<int, int> m;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    m[a[i]]++;
  }

  int sum = 0;
  for (auto v : m) {
    int tmp = v.second - v.first;
    if (tmp < 0) {
      sum += v.second;
    } else {
      sum += tmp;
    }
  }
  cout << sum << endl;
}