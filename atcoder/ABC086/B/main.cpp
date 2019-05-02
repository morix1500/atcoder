#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int sum = 0;
  if (b >= 100) {
    sum += (a * 1000);
  } else if (b >= 10) {
    sum += (a * 100);
  } else {
    sum += (a * 10);
  }
  sum += b;

  for (int i = 1; i < 1000; i++) {
    if (i * i == sum) {
      cout << "Yes" << endl;
      return 0;

    } else if (i * i > sum) {
      break;
    }
  }

  cout << "No" << endl;
}