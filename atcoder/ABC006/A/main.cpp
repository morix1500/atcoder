#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string n2 = to_string(n);

  cout << (n2.find("3") != -1 || n % 3 == 0 ? "YES" : "NO") << endl;
}