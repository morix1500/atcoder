#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  string s;
  cin >> s;
  vector<string> pos = {"Do", "Re", "Mi", "Fa", "So", "La", "Si"};
  string kenban      = "WBWBWWBWBWBWWBWBWWBWBWBWWBWBWWBWBWBWWBWBWWBWBWBW";

  int white = 0;
  for (int i = 0; i < kenban.size(); i++) {
    if (kenban.substr(i, 20) == s) break;
    if (kenban[i] == 'W') white++;
  }
  cout << pos[white] << endl;
}