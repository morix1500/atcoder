#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> w(n);
  for (int i = 0; i < n; i++)
    cin >> w[i];

  map<string, int> m;
  bool res  = true;
  char last = w[0][0];
  for (int i = 0; i < n; i++) {
    if (last == w[i][0]) {
      if (m[w[i]] != 0) {
        res = false;
        break;
      } else {
        m[w[i]]++;
      }
    } else {
      res = false;
      break;
    }
    last = w[i][w[i].size() - 1];
  }
  if (res) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}