#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  vector<pair<char, int>> arr;

  char t  = s[0];
  int cnt = 1;
  for (int i = 1; i < s.size(); i++) {
    if (s[i] == t) {
      cnt++;
    } else {
      arr.push_back(make_pair(t, cnt));
      t   = s[i];
      cnt = 1;
    }
  }
  arr.push_back(make_pair(t, cnt));

  string str = "";
  for (auto p : arr) {
    str += p.first + to_string(p.second);
  }
  cout << str << endl;
}