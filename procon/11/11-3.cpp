#include <bits/stdc++.h>
using namespace std;
static const int MAX = 1000;

void lcs(string X, string Y) {
  int m = X.size();
  int n = Y.size();

  vector<vector<int>> res(MAX, vector<int>(MAX));
  int l = 0;
  for (int i = 1; i <= m; i++) {
    for (int j = 1; j <= n; j++) {
      if (X.at(i - 1) == Y.at(j - 1)) {
        res.at(i).at(j) = res.at(i - 1).at(j - 1) + 1;
      } else {
        res.at(i).at(j) = max(res.at(i - 1).at(j), res.at(i).at(j - 1));
      }
      l = max(l, res.at(i).at(j));
    }
  }
  cout << l << endl;
}

int main() {
  int q;
  cin >> q;

  vector<string> d(q * 2);
  for (int i = 0; i < q * 2; i++) {
    cin >> d.at(i);
  }

  for (int i = 0; i < q * 2; i = i + 2) {
    lcs(d.at(i), d.at(i + 1));
  }
}