#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  string s;
  cin >> s;
  string S = "";

  for (int i = 0; i < s.size(); i++) {
    if (i == 0) {
      S += s[i];
    } else {
      if (s[i - 1] != s[i]) { S += s[i]; }
    }
  }
  cout << S.size() - 1 << endl;
}