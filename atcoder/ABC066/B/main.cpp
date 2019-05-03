#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  s.erase(s.end() - 1, s.end());
  int size      = s.size();
  string kaibun = "";
  int a         = 1;
  while (a < size) {
    string s1 = s.substr(0, a);
    string s2 = s.substr(a, a);
    if (s1 == s2) { kaibun = s1; }
    a++;
  }
  string tmp = kaibun;
  int cnt    = kaibun.size();
  while (cnt < size) {
    if (kaibun != tmp) { break; }
    tmp += kaibun;
    if (size > cnt + kaibun.size()) {
      cnt += kaibun.size();
    } else {
      break;
    }
  }
  cout << cnt << endl;
}