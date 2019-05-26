#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<ll> a(n);
  ll k4 = 0;
  ll k2 = 0;
  ll k1 = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] % 4 == 0) {
      k4++;
    } else if (a[i] % 2 == 0) {
      k2++;
    } else {
      k1++;
    }
  }
  if (k4 + 1 == k1 && n == (k4 + k1)) {
    cout << "Yes" << endl;
    return 0;
  } else {
    if (k4 < k1) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}