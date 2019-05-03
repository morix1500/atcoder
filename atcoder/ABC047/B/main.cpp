#include <bits/stdc++.h>
using namespace std;

int main() {
  int w, h, n;
  cin >> w >> h >> n;
  vector<int> x(n), y(n), a(n);
  for (int i = 0; i < n; i++)
    cin >> x[i] >> y[i] >> a[i];

  vector<vector<int>> A(h, vector<int>(w));
  for (int i = 0; i < n; i++) {
    if (a[i] == 1) {
      for (int z = 0; z < h; z++) {
        for (int v = 0; v < x[i]; v++) {
          A[z][v] = 1;
        }
      }
    } else if (a[i] == 2) {
      for (int z = 0; z < h; z++) {
        for (int v = x[i]; v < w; v++) {
          A[z][v] = 1;
        }
      }
    } else if (a[i] == 3) {
      for (int z = (h - y[i]); z < h; z++) {
        for (int v = 0; v < w; v++) {
          A[z][v] = 1;
        }
      }
    } else {
      for (int z = 0; z < (h - y[i]); z++) {
        for (int v = 0; v < w; v++) {
          A[z][v] = 1;
        }
      }
    }
  }
  int cnt = 0;
  for (int z = 0; z < h; z++) {
    for (int v = 0; v < w; v++) {
      if (A[z][v] == 0) cnt++;
    }
  }
  cout << cnt << endl;
}