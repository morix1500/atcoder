#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll r, D, x;
  cin >> r >> D >> x;
  vector<ll> X(15);
  X[0] = x;

  for (int i = 1; i <= 10; i++) {
    X[i] = r * X[i - 1] - D;
  }
  for (int i = 1; i <= 10; i++) {
    cout << X[i] << endl;
  }
}