#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, D, E, F;
  double N;
  cin >> A >> B >> C >> D >> E >> F;
  N = E / 100.0;
  vector<int> x;
  for (int i = 0; 100 * A * i <= F; i++) {
    for (int j = 0; 100 * B * j <= F; j++) {
      int tmp = 100 * A * i + 100 * B * j;
      if (tmp > F) continue;
      x.push_back(tmp);
    }
  }
  vector<int> y;
  for (int i = 0; C * i <= F; i++) {
    for (int j = 0; D * j <= F; j++) {
      int tmp = C * i + D * j;
      if (tmp > F) continue;
      y.push_back(tmp);
    }
  }
  double mx = 0.0;
  int w = 100 * A, s = 0;
  for (int i = 0; i < x.size(); i++) {
    for (int j = 0; j < y.size(); j++) {
      if (x[i] + y[j] > F || x[i] + y[j] == 0) continue;
      double tmp = double(y[j]) / double(x[i]);
      if (N >= tmp) {
        if (mx < tmp) {
          mx = tmp;
          w  = x[i] + y[j];
          s  = y[j];
        }
      }
    }
  }
  cout << w << " " << s << endl;
}