#include <bits/stdc++.h>
using namespace std;

int main() {
  int x;
  cin >> x;
  int sum = 0;
  while (x) {
    sum += x % 10;
    x /= 10;
  }
  cout << sum << endl;
}