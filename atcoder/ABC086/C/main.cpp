#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> t(n), x(n), y(n);
  for (int i = 0; i < n; i++) {
    cin >> t[i] >> x[i] >> y[i];
  }

  for (int i = 0; i < n; i++) {
    if (t[i] < x[i] + y[i]) {
      cout << "No" << endl;
      return 0;
    }
    if (t[i] % 2 == 0 && (x[i] + y[i]) % 2 == 0) {
    } else if (t[i] % 2 == 1 && (x[i] + y[i]) % 2 == 1) {
    } else {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}