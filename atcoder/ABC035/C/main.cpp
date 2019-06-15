#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> l(q), r(q);
  for (int i = 0; i < q; i++) {
    cin >> l[i] >> r[i];
    l[i]--;
    r[i]--;
  }

  vector<int> x(n + 1);
  for (int j = 0; j < q; j++) {
    x[l[j]] += 1;
    x[r[j] + 1] += -1;
  }
  vector<int> b(n + 1);
  for (int i = 0; i < n; i++) {
    b[i + 1] = b[i] + x[i];
    cout << (b[i + 1] % 2 == 0 ? 0 : 1);
  }
  cout << endl;
}