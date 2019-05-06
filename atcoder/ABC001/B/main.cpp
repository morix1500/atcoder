#include <bits/stdc++.h>
using namespace std;

int main() {
  int m;
  cin >> m;
  if (m > 70000) {
    cout << 89 << endl;
  } else if (m >= 35000) {
    cout << (((m / 1000) - 30) / 5) + 80 << endl;
  } else if (m >= 6000) {
    cout << (m / 1000) + 50 << endl;
  } else if (m >= 100) {
    int n = (m * 10 / 1000);
    printf("%02d\n", n);
  } else {
    cout << "00" << endl;
  }
}