#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(m), b(m);
  for (int i = 0; i < m; i++)
    cin >> a[i] >> b[i];

  map<int, int> ma;
  for (int i = 0; i < m; i++) {
    ma[a[i]]++;
    ma[b[i]]++;
  }
  for (int i = 0; i < n; i++) {
    cout << ma[i + 1] << endl;
  }
}