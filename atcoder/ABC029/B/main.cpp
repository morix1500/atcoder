#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<string> s(12);
  for (int i = 0; i < 12; i++)
    cin >> s[i];
  int cnt = 0;
  for (int i = 0; i < 12; i++) {
    if (s[i].find('r') != -1) cnt++;
  }
  cout << cnt << endl;
}