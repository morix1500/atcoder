#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  vector<string> s(n);
  vector<int> d(n);
  for (int i = 0; i < n; i++)
    cin >> s[i] >> d[i];

  int sum = 0;
  for (int i = 0; i < n; i++) {
    int idou = d[i];
    if (idou < a) {
      idou = a;
    } else if (idou >= b) {
      idou = b;
    }
    if (s[i] == "East") {
      sum += idou;
    } else {
      sum -= idou;
    }
  }
  if (sum > 0) {
    cout << "East " << sum << endl;
  } else if (sum == 0) {
    cout << 0 << endl;
  } else {
    cout << "West " << abs(sum) << endl;
  }
}