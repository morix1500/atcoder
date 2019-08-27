#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> p(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }

  vector<int> b = p;
  sort(b.begin(), b.end());
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    if (p[i] != b[i]) { cnt++; }
  }
  cout << (cnt == 2 || cnt == 0 ? "YES" : "NO") << endl;
}