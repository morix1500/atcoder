#include <bits/stdc++.h>
using namespace std;

int main() {
  string s1, s2;
  cin >> s1 >> s2;

  string s3 = "";
  s3.push_back(s2[2]);
  s3.push_back(s2[1]);
  s3.push_back(s2[0]);
  string s4 = "";
  s4.push_back(s1[2]);
  s4.push_back(s1[1]);
  s4.push_back(s1[0]);

  if (s1 == s3 && s2 == s4) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}