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

  for (int k = 0; k < 2 * N; k++) {
    if (k == 0) {
      cout << 0 << endl;
      continue;
    }

    int sum = 0;
    int s   = k - 1;
    if (k > N) { s = N - 1; }

    for (int i = s; i >= 0; i--) {
      int x = i;
      int y = k - x - 1;
      if (x < y) break;

      sum += (A.at(x) * B.at(y));
      if (x != y) { sum += (A.at(y) * B.at(x)); }
    }

    cout << sum << endl;
  }
}