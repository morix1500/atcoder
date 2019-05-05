#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  transform(s.begin(), s.end(), s.begin(), ::tolower);
  s[0] = s[0] - ('a' - 'A');
  cout << s << endl;
}