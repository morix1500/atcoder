#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;

  string ac = "b";
  int index = 1;
  int cnt   = 0;
  for (int i = 0; i <= 1000; i++) {
    if (ac == s) { break; }
    cnt++;
    if (index == 1) {
      ac    = "a" + ac + "c";
      index = 2;

    } else if (index == 2) {
      ac    = "c" + ac + "a";
      index = 3;

    } else if (index == 3) {
      ac    = "b" + ac + "b";
      index = 1;
    }
  }
  cout << (ac == s ? cnt : -1) << endl;
}