#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<int> w(n);
  for (int i = 0; i < n; i++) {
    cin >> w[i];
  }
  int mn = INT_MAX;
  for (int i = 0; i < n; i++) {
    int left = 0, right = 0;
    bool l = true;
    for (int j = 0; j < n; j++) {
      if (l) {
        left += w[j];
      } else {
        right += w[j];
      }
      if (i == j) { l = false; }
    }
    mn = min(mn, abs(left - right));
  }
  cout << mn << endl;
}