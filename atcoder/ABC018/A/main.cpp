#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> s(3);
  cin >> s[0] >> s[1] >> s[2];

  vector<int> res(3);
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (i == j) continue;
      if (s[i] < s[j]) {
        res[i] += 2;
      } else if (s[i] == s[j]) {
        res[i]++;
      }
    }
    if (res[i] == 4) {
      cout << 3 << endl;
    } else if (res[i] == 2) {
      cout << 2 << endl;
    } else {
      cout << 1 << endl;
    }
  }
}