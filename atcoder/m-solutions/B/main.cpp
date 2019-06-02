#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  string s;
  cin >> s;

  int cnt = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'o') cnt++;
  }

  if (15 - s.size() + cnt >= 8) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}