#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, X, Y;
  cin >> n >> m >> X >> Y;
  vector<int> x(n), y(m);
  for (int i = 0; i < n; i++)
    cin >> x[i];
  for (int i = 0; i < m; i++)
    cin >> y[i];

  sort(x.begin(), x.end(), greater<int>());
  sort(y.begin(), y.end(), greater<int>());

  for (int z = x[0] + 1; z <= y[m - 1]; z++) {
    if (z > X && z <= Y) {
      cout << "No War" << endl;
      return 0;
    }
  }
  cout << "War" << endl;
}