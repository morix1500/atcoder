#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int d = c - (a - b);
  cout << (d < 0 ? 0 : d) << endl;
}