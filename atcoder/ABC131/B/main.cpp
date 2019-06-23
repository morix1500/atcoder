#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n, l;
  cin >> n >> l;
  int sum = 0;
  vector<int> aji(n);
  for (int i = 0; i < n; i++) {
    aji[i] = l + i;
    sum += aji[i];
  }

  int mn  = INT_MAX;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int sm = 0;
    for (int j = 0; j < n; j++) {
      if (i == j) continue;
      sm += aji[j];
    }
    if (mn > abs(sum - sm)) {
      mn  = abs(sum - sm);
      ans = sm;
    }
  }
  cout << ans << endl;
}