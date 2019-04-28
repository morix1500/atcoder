#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;

  string S;
  cin >> S;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    if (i != 0) {
      if (S[i] == 'C' && S[i - 1] == 'A') { a[i] = 1; }
    }
  }
  vector<int> b(n + 1);
  b[0] = 0;
  for (int i = 0; i < n; i++) {
    b[i + 1] = b[i] + a[i];
  }

  for (int i = 0; i < q; i++) {
    int l, r;
    cin >> l >> r;
    cout << b[r] - b[l] << endl;
  }
}