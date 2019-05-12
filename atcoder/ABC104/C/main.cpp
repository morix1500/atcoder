#include <bits/stdc++.h>
using namespace std;

int main() {
  int D, G;
  cin >> D >> G;
  vector<int> p(D), c(D);
  for (int i = 0; i < D; i++)
    cin >> p[i] >> c[i];

  int mn = INT_MAX;
  for (int i = 0; i < (1 << D); i++) {
    int sum = 0;
    int cnt = 0;

    for (int j = 0; j < D; j++) {
      if ((1 << j) & i) {
        sum += p[j] * 100 * (j + 1) + c[j];
        cnt += p[j];
      }
    }
    if (sum >= G) {
      mn = min(mn, cnt);
      continue;
    } else {
      for (int j = D - 1; j >= 0; j--) {
        if ((1 << j) & i) continue;
        for (int z = 0; z < p[j]; z++) {
          if (sum >= G) break;
          sum += (100 * (j + 1));
          cnt++;
        }
      }
      mn = min(mn, cnt);
    }
  }
  cout << mn << endl;
}