#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;
  vector<char> ch = {'a', 't', 'c', 'o', 'd', 'e', 'r'};

  for (int i = 0; i < s.size(); i++) {
    if (s[i] != t[i]) {
      if (s[i] == '@' || t[i] == '@') {
        char m   = s[i] == '@' ? t[i] : s[i];
        auto ite = find(ch.begin(), ch.end(), m);
        if (ite == ch.end()) {
          cout << "You will lose" << endl;
          return 0;
        }
      } else {
        cout << "You will lose" << endl;
        return 0;
      }
    }
  }
  cout << "You can win" << endl;
}