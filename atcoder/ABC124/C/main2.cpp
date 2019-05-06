#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  string k1 = "", k2 = "";
  int n = s.size();
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      k1 += "1";
      k2 += "0";
    } else {
      k1 += "0";
      k2 += "1";
    }
  }

  string s3 = s[0] == '0' ? k2 : k1;
  int cnt   = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] != s3[i]) cnt++;
  }
  cout << cnt << endl;
}