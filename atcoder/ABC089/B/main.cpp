#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  bool f = false;
  for (int i = 0; i < n; i++) {
    string tmp;
    cin >> tmp;
    if (tmp == "Y") {
      cout << "Four" << endl;
      return 0;
    }
  }

  cout << "Three" << endl;
}