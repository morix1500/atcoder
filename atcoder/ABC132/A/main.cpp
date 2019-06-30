#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  string s;
  cin >> s;
  map<char, int> m;
  for (int i = 0; i < s.size(); i++) {
    m[s[i]]++;
  }

  if (m.size() != 2) {
    cout << "No" << endl;
    return 0;
  }

  for (auto v : m) {
    if (v.second != 2) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}