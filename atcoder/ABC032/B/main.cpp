#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int k;
  cin >> s >> k;
  map<string, int> ma;
  int size = s.size();
  int cnt  = 0;
  for (int i = 0; i < size; i++) {
    string str = s.substr(i, k);
    if (str.size() != k) continue;
    if (ma[str] == 0) {
      ma[str] = 1;
      cnt++;
    }
  }
  cout << cnt << endl;
}