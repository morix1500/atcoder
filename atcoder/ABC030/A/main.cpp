#include <bits/stdc++.h>
using namespace std;

int main() {
  double a, b, c, d;
  cin >> a >> b >> c >> d;
  double ta = (b / a) * 100.0;
  double ao = (d / c) * 100.0;
  if (ta > ao) {
    cout << "TAKAHASHI" << endl;
  } else if (ta == ao) {
    cout << "DRAW" << endl;
  } else {
    cout << "AOKI" << endl;
  }
}