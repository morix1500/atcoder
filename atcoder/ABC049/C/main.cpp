#include <bits/stdc++.h>
using namespace std;

void replaceAll(string &str, string from, string to) {
  int pos = str.find(from);
  if (pos == -1) return;

  str.replace(pos, from.size(), to);
  replaceAll(str, from, to);
}

int main() {
  string s;
  cin >> s;

  replaceAll(s, "eraser", "");
  replaceAll(s, "erase", "");
  replaceAll(s, "dreamer", "");
  replaceAll(s, "dream", "");

  cout << (s.empty() ? "YES\n" : "NO\n");
}