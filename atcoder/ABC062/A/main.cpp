#include <bits/stdc++.h>
using namespace std;

int main() {
  string x, y;
  cin >> x >> y;
  string g1 = "|1||3||5||7||8||10||12|";
  string g2 = "|4||6||9||11|";

  if (g1.find("|" + x + "|") != -1 && g1.find("|" + y + "|") != -1) {
    cout << "Yes" << endl;
  } else if (g2.find("|" + x + "|") != -1 && g2.find("|" + y + "|") != -1) {
    cout << "Yes" << endl;
  } else if (x == "2" && y == "2") {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}