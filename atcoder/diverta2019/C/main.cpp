#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  for (int i = 0; i < n; i++)
    cin >> s[i];

  int preB = 0, sufA = 0, bothAB = 0, other = 0;

  int cnt = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < s[i].size(); j++) {
      if (j != 0 && s[i][j] == 'B') {
        if (s[i][j - 1] == 'A') cnt++;
      }
    }
    if (s[i][0] == 'B' && s[i][s[i].size() - 1] == 'A') {
      bothAB++;
    } else if (s[i][0] == 'B') {
      preB++;
    } else if (s[i][s[i].size() - 1] == 'A') {
      sufA++;
    }
  }
  bool ab = false;
  if (bothAB > 0) ab = true;

  bool minus = false;
  if (bothAB > 0 && sufA > 0) {
    sufA--;
    bothAB--;
    cnt++;
    minus = true;
  }

  while (bothAB > 0) {
    if (!minus) {
      bothAB--;
      minus = true;
      continue;
    }
    cnt++;
    bothAB--;
  }

  if (ab && preB > 0) {
    preB--;
    cnt++;
  }
  while (preB > 0 && sufA > 0) {
    cnt++;
    preB--;
    sufA--;
  }

  cout << cnt << endl;
}