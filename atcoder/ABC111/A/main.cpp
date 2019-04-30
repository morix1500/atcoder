#include <bits/stdc++.h>
using namespace std;

int main() {
  string n;
  cin >> n;
  for (int i = 0; i < n.size(); i++) {
    if (n[i] == '1') {
      cout << 9;
    } else if (n[i] == '9') {
      cout << 1;
    } else {
      cout << n[i] - '0';
    }
  }
  cout << endl;
}