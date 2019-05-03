#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int size = s.size();
  int cnt  = 0;
  for (int i = 0; i < size; i++) {
    if (i == 0 || i == size - 1) {
      cout << s[i];
      continue;
    }
    cnt++;
    if (i == size - 2) cout << cnt;
  }
  cout << endl;
}