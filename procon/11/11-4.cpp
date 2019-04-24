#include <bits/stdc++.h>
using namespace std;
static const int MAX = 100;

int main() {
  int n;
  cin >> n;

  vector<int> p(MAX + 1);
  for (int i = 1; i <= n; i++) {
    cin >> p.at(i - 1) >> p.at(i);
  }

  vector<vector<int>> m(MAX + 1, vector<int>(MAX + 1));
  for (int i = 1; i <= n; i++)
    m.at(i).at(i) = 0;

  for (int l = 2; l <= n; l++) {
    for (int i = 1; i <= n - l + 1; i++) {
      int j         = i + l - 1;
      m.at(i).at(j) = (1 << 21);
      for (int k = i; k <= j; k++) {
        m.at(i).at(j) = min(m.at(i).at(j), m.at(i).at(k) + m.at(k + 1).at(j) +
                                               p.at(i - 1) * p.at(k) * p.at(j));
      }
    }
  }
  cout << m[1][n] << endl;
}