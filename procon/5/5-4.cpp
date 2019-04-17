#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<string> cmd(n);
  vector<string> str(n);

  for (int i = 0; i < n; i++) {
    cin >> cmd.at(i) >> str.at(i);
  }

  map<string, bool> m;
  for (int i = 0; i < n; i++) {
    if (cmd.at(i) == "insert") {
      m[str.at(i)] = true;
    } else {
      if (m[str.at(i)]) {
        cout << "yes" << endl;
      } else {
        cout << "no" << endl;
      }
    }
  }
}