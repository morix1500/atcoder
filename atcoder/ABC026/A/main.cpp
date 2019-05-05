#include <bits/stdc++.h>
using namespace std;

int main() {
  int x;
  cin >> x;
  int a  = 0;
  int b  = 0;
  int mn = INT_MAX;
  for (int i = 1; i < x; i++) {
    int tmp = abs(i - (x - i));
    if (mn > tmp) {
      mn = tmp;
      a  = i;
      b  = x - i;
    }
  }
  cout << a * b << endl;
}