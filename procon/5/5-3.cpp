#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  vector<int> S, T;

  cin >> n;
  S.resize(n);

  for (int i = 0; i < n; i++) {
    cin >> S.at(i);
  }

  cin >> q;
  T.resize(q);
  for (int i = 0; i < q; i++) {
    cin >> T.at(i);
  }

  int res = 0;

  for (int i = 0; i < q; i++) {
    int left  = 0;
    int right = n;

    while (left <= right) {
      int mid = (left + right) / 2;
      if (S.at(mid) == T.at(i)) {
        res++;
        break;
      } else if (S.at(mid) < T.at(i)) {
        left = mid;
      } else {
        right = mid;
      }
    }
  }

  cout << res << endl;
}