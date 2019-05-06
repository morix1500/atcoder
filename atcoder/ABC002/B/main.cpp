#include <bits/stdc++.h>
using namespace std;

void replaceAll(string &str, string from, string to) {
  int pos = str.find(from);
  if (pos == -1) return;

  str.replace(pos, from.size(), to);
  replaceAll(str, from, to);
}

int main() {
  string w;
  cin >> w;
  replaceAll(w, "a", "");
  replaceAll(w, "i", "");
  replaceAll(w, "u", "");
  replaceAll(w, "e", "");
  replaceAll(w, "o", "");
  cout << w << endl;
}