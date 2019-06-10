#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> D(k);
  vector<int> m(10);
  for (int i = 0; i < k; i++) {
    cin >> D[i];
    m[D[i]] = 1;
  }
  for (int i = 0; i <= 99999; i++) {
    int z  = i;
    bool r = false;
    while (z) {
      if (m[z % 10] == 1) {
        r = true;
        break;
      }
      z /= 10;
    }
    if (r) continue;
    if (i >= n) {
      cout << i << endl;
      return 0;
    }
  }
  cout << 0 << endl;
}