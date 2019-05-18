#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> x(3);
  cin >> x[0] >> x[1] >> x[2];
  sort(x.begin(), x.end(), greater<int>());

  int cnt = 0;
  while (true) {
    if (x[0] == x[1] && x[1] == x[2]) break;
    if (x[0] == x[1]) {
      int tmp = x[0] - x[2];
      if (tmp == 1) {
        x[2] += 2;
      } else {
        x[2] += (2 * (tmp / 2));
        cnt += (tmp / 2) - 1;
      }
    } else if (x[1] == x[2]) {
      if (x[0] - x[1] == 1) {
        x[1]++;
        x[2]++;
      } else {
        int tmp = x[0] - x[1];
        x[1] += tmp;
        x[2] += tmp;
        cnt += tmp - 1;
      }
    } else if (x[0] - x[1] >= 2) {
      int tmp = x[0] - x[1];
      x[1] += (2 * (tmp / 2));
      cnt += (tmp / 2) - 1;
    } else if (x[0] - x[1] == 1) {
      x[1]++;
      x[2]++;
    } else if (x[0] - x[2] >= 2) {
      int tmp = x[0] - x[2];
      x[2] += (2 * (tmp / 2));
      cnt += (tmp / 2) - 1;
    } else if (x[0] - x[2] == 1) {
      x[2]++;
    }
    cnt++;
    sort(x.begin(), x.end(), greater<int>());
  }
  cout << cnt << endl;
}