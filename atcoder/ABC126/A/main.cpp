#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  string s;
  cin >> n >> k >> s;
  k--;

  s[k] = s[k] - ('A' - 'a');
  cout << s << endl;
}