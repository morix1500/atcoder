#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> s(n);
  map<string, int> ma;
  for (int i = 0; i < n; i++) {
    string tmp;
    cin >> tmp;
    ma[tmp]++;
  }

  int mx = 0;
  string res;
  for (auto v : ma) {

    if (mx < v.second) {
      mx  = v.second;
      res = v.first;
    }
  }
  cout << res << endl;
}