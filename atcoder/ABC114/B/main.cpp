#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  vector<int> s;
  for (int i = 0; i < S.size() - 2; i++) {
    for (int j = i; j < S.size() - 2; j++) {
      int a = (S[j] - '0'), b = (S[j + 1] - '0'), c = (S[j + 2] - '0');
      s.push_back(abs(753 - (a * 100 + b * 10 + c)));
    }
  }
  sort(s.begin(), s.end());
  cout << s[0] << endl;
}