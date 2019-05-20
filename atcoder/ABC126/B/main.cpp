#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  string a = "";
  a += s[0];
  a += s[1];
  string b = "";
  b += s[2];
  b += s[3];

  int c = stoi(a);
  int d = stoi(b);

  if (c >= 1 && c <= 12) {
    if (d >= 1 && d <= 12) {
      cout << "AMBIGUOUS" << endl;
    } else {
      cout << "MMYY" << endl;
    }
  } else if (d >= 1 && d <= 12) {
    if (c >= 1 && c <= 12) {
      cout << "AMBIGUOUS" << endl;
    } else {
      cout << "YYMM" << endl;
    }
  } else {
    cout << "NA" << endl;
  }
}