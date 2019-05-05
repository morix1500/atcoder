#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int n;
  cin >> s >> n;

  vector<string> arr;
  for (int i = 0; i < s.size(); i++) {
    for (char j = 0; j < s.size(); j++) {
      string str = {s[i], s[j]};
      arr.push_back(str);
    }
  }
  cout << arr[n - 1] << endl;
}