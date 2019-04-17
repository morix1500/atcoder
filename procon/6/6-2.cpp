#include <bits/stdc++.h>
using namespace std;

int rec(vector<int> &A, int m) {}

int solve(vector<int> &A, int i, int n, int m) {
  if (m == 0) { return 1; }
  if (i >= n) { return 0; }
  int res = solve(A, i + 1, n, m) || solve(A, i + 1, n, m - A.at(i));
  return res;
}

int main() {
  int n, q;
  vector<int> A, m;

  cin >> n;
  A.resize(n);
  for (int i = 0; i < n; i++) {
    cin >> A.at(i);
  }
  cin >> q;
  m.resize(q);
  for (int i = 0; i < q; i++) {
    cin >> m.at(i);
  }

  for (int i = 0; i < q; i++) {
    if (solve(A, 0, n, m.at(i))) {
      cout << "yes" << endl;
    } else {
      cout << "no" << endl;
    }
  }
}