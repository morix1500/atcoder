#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  string s;
  cin >> s;
  for (int i = 1; i < s.size(); i++) {
    if (s[i - 1] == s[i]) {
      cout << "Bad" << endl;
      return 0;
    }
  }
  cout << "Good" << endl;
}