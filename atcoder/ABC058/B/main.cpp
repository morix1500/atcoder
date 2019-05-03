#include <bits/stdc++.h>
using namespace std;

int main() {
  string o, e;
  cin >> o >> e;
  int size = o.size() + e.size();

  string res = "";
  int i      = 0;
  int O = 0, E = 0;
  while (i < size) {
    if (i % 2 == 0) {
      res += o[O];
      O++;
    } else {
      res += e[E];
      E++;
    }
    i++;
  }
  cout << res << endl;
}