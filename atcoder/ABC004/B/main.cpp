#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<vector<string>> s(4, vector<string>(4));
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      cin >> s[i][j];
    }
  }
  for (int i = 3; i >= 0; i--) {
    reverse(s[i].begin(), s[i].end());
    for (int j = 0; j < 4; j++) {
      cout << s[i][j];
      if (j != 3) cout << " ";
    }
    cout << endl;
  }
}