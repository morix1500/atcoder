#include <bits/stdc++.h>
using namespace std;

int main() {
  string s1, s2, s3;
  cin >> s1 >> s2 >> s3;
  int a = 0, b = 0, c = 0;
  char next = 'a';
  while (true) {
    if (next == 'a') {
      if (a == s1.size()) {
        cout << "A" << endl;
        return 0;
      }
      next = s1[a];
      a++;
    } else if (next == 'b') {
      if (b == s2.size()) {
        cout << "B" << endl;
        return 0;
      }
      next = s2[b];
      b++;
    } else {
      if (c == s3.size()) {
        cout << "C" << endl;
        return 0;
      }
      next = s3[c];
      c++;
    }
  }
}