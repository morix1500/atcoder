#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<string> split(string s, char del) {
  int first = 0;
  int last  = s.find_first_of(del);
  vector<string> res;

  if (last == string::npos) {
    res.push_back(s);
    return res;
  }

  while (first < s.size()) {
    string subStr(s, first, last - first);
    res.push_back(subStr);
    first = last + 1;
    last  = s.find_first_of(del, first);
    if (last == string::npos) { last = s.size(); }
  }
  return res;
}

int main() {
  string s;
  cin >> s;

  int cnt            = 0;
  vector<string> arr = split(s, '+');
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i].size() == 1 && arr[i] != "0") {
      cnt++;
    } else if (arr[i].size() > 1) {
      if (arr[i].find('0') == string::npos) { cnt++; }
    }
  }
  cout << cnt << endl;
}