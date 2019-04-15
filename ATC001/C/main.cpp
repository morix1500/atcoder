#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  vector<int> B(N);

  for (int i = 0; i < N; i++) {
    cin >> A.at(i) >> B.at(i);
  }

  vector<vector<bool>> M(N, vector<bool>(N));
  int l = A.size();
  for (int k = 1; k <= 2 * N; k++) {
    if (k == 1) {
      cout << 0 << endl;
      continue;
    }

    int sum = 0;
    for (int i = 1; i < k; i++) {
      if (i / N > l) {
        i += i;
        continue;
      }
      int x = k - i;
      int y = k - x;
      x -= 1;
      y -= 1;
      if (x > l - 1 || y > l - 1 || M.at(x).at(y) || M.at(y).at(x)) {
        continue;
      }

      sum += (A.at(x) * B.at(y));
      M.at(x).at(y) = true;
      if (x != y) {
        sum += (A.at(y) * B.at(x));
        M.at(y).at(x) = true;
      }
    }

    cout << sum << endl;
  }
}