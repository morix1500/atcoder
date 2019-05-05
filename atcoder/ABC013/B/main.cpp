#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int cnt1 = 0;
  int c    = a;
  while (true) {
    cnt1++;
    if (c == 9) {
      c = 0;
    } else {
      c++;
    }
    if (c == b) { break; }
  }
  int cnt2 = 0;
  c        = a;

  while (true) {
    cnt2++;
    if (c == 0) {
      c = 9;
    } else {
      c--;
    }
    if (c == b) { break; }
  }

  cout << min(cnt1, cnt2) << endl;
}