#include <bits/stdc++.h>
using namespace std;

int main() {
  string a, b;
  cin >> a >> b;

  int n = a.size(), m = b.size();

  if (n > m) {
    cout << "GREATER" << endl;
  } else if (n < m) {
    cout << "LESS" << endl;
  } else {
    for (int i = 0; i < n; i++) {
      if (a[i] > b[i]) {
        cout << "GREATER" << endl;
        return 0;
      } else if (a[i] < b[i]) {
        cout << "LESS" << endl;
        return 0;
      }
    }
    cout << "EQUAL" << endl;
  }
}