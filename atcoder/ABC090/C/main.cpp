#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, m;
  cin >> n >> m;

  if (n == 2 || m == 2) {
    cout << 0 << endl;
  } else if (n == 1 && m == 1) {
    cout << 1 << endl;
  } else if (n == 1) {
    cout << m - 2 << endl;
  } else if (m == 1) {
    cout << n - 2 << endl;
  } else {
    cout << (n * m) - (m * 2) - (n - 2) * 2 << endl;
  }

  // vector<string> s(n);
  // for (int i = 0; i < n; i++) {
  //  string line = "";
  //  for (int j = 0; j < m; j++) {
  //    line += ".";
  //  }
  //  s[i] = line;
  //}

  // for (int i = 0; i < n; i++) {
  //  for (int j = 0; j < m; j++) {
  //    s[i][j] = (s[i][j] == '#' ? '.' : '#');
  //    if (i != 0) s[i - 1][j] = (s[i - 1][j] == '#' ? '.' : '#');
  //    if (i != n - 1) s[i + 1][j] = (s[i + 1][j] == '#' ? '.' : '#');
  //    if (j != 0) s[i][j - 1] = (s[i][j - 1] == '#' ? '.' : '#');
  //    if (j != m - 1) s[i][j + 1] = (s[i][j + 1] == '#' ? '.' : '#');
  //    if (i != 0 && j != 0)
  //      s[i - 1][j - 1] = (s[i - 1][j - 1] == '#' ? '.' : '#');
  //    if (i != 0 && j != m - 1)
  //      s[i - 1][j + 1] = (s[i - 1][j + 1] == '#' ? '.' : '#');
  //    if (i != n - 1 && j != 0)
  //      s[i + 1][j - 1] = (s[i + 1][j - 1] == '#' ? '.' : '#');
  //    if (i != n - 1 && j != m - 1)
  //      s[i + 1][j + 1] = (s[i + 1][j + 1] == '#' ? '.' : '#');
  //  }
  //}
  // for (int i = 0; i < n; i++) {
  //  cout << s[i] << endl;
  //}
}