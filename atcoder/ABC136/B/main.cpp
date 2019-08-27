#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;

  bool odd = true;
  int keta = 10;
  ll cnt   = 0;
  for (int i = 1; i <= n; i++) {
    if (i >= keta) {
      odd = !odd;
      keta *= 10;
    }
    if (odd) { cnt++; }
  }
  cout << cnt << endl;
}