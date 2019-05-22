#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<vector<int>> F(n, vector<int>(10));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 10; j++) {
      cin >> F[i][j];
    }
  }

  vector<vector<int>> P(n, vector<int>(11));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= 10; j++) {
      cin >> P[i][j];
    }
  }

  int mx = (INT_MAX / 2) * -1;
  for (int msk = 1; msk <= (1 << 10); msk++) {
    int cc = 0;
    bool r = false;
    for (int i = 0; i < n; i++) {
      int c = 0;
      for (int j = 0; j < 10; j++) {
        if ((msk & (1 << j)) && F[i][j]) {
          c++;
          r = true;
        }
      }
      cc += P[i][c];
    }
    if (r) mx = max(mx, cc);
  }
  cout << mx << endl;
}