#include <bits/stdc++.h>
using namespace std;

int main() {
  int x;
  cin >> x;
  int i = 0;
  while (true) {
    i++;
    if (pow(i, 4) == x) { break; }
  }
  cout << i << endl;
}