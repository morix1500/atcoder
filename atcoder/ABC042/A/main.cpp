#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> s(3);
  cin >> s[0] >> s[1] >> s[2];
  sort(s.begin(), s.end());
  cout << ((s[0] == 5 && s[1] == 5 && s[2] == 7) ? "YES" : "NO") << endl;
}