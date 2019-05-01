#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;

  map<char, int> aMap;

  int mx = 0;
  for (int i = 0; i < n; i++) {
    if (aMap[s[i]] == 0) { aMap[s[i]]++; }
    map<char, int> bMap;
    int cnt = 0;
    if (i != n - 1) {
      for (int j = i + 1; j < n; j++) {
        if (aMap[s[j]] == 1 && bMap[s[j]] == 0) {
          cnt++;
          bMap[s[j]]++;
        }
      }
    }
    mx = max(mx, cnt);
  }
  cout << mx << endl;
}