#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<double> x(N);
  vector<string> u(N);

  for (int i = 0; i < N; i++) {
    cin >> x.at(i) >> u.at(i);
  }

  double res = 0.0;
  for (int i = 0; i < N; i++) {
    if (u.at(i) == "BTC") {
      res += x.at(i) * 380000.0;
    } else {
      res += x.at(i);
    }
  }
  cout << res << endl;
}