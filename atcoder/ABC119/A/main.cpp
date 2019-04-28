#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int year = stoi(S.substr(0, 4));
  int mon  = stoi(S.substr(5, 2));
  int day  = stoi(S.substr(8, 2));

  if (year <= 2019 && mon <= 4) {
    cout << "Heisei" << endl;
  } else {
    cout << "TBD" << endl;
  }
}