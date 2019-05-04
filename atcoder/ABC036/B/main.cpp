#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  for (int i = 0; i < n; i++)
    cin >> s[i];
  vector<vector<char>> r(n, vector<char>(n));

  int i2 = 0;
  for (int j = 0; j < n; j++) {
    int j2 = 0;
    for (int i = n - 1; i >= 0; i--) {
      r[i2][j2] = s[i][j];
      j2++;
    }
    i2++;
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << r[i][j];
    }
    cout << endl;
  }
}