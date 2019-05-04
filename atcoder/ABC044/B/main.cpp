#include <bits/stdc++.h>
using namespace std;

int main() {
  string w;
  cin >> w;
  map<char, int> ma;
  for (int i = 0; i < w.size(); i++) {
    ma[w[i]]++;
  }
  bool res = true;
  for (auto k : ma) {
    if (k.second % 2 != 0) {
      res = false;
      break;
    }
  }
  cout << (res ? "Yes" : "No") << endl;
}