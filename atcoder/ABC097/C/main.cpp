#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int k;
  cin >> s >> k;

  vector<string> arr;
  map<string, int> m;
  int cnt = 0;
  for (char i = 'a'; i <= 'z'; i++) {
    if (cnt > k) { break; }
    for (int j = 0; j < s.size(); j++) {
      if (s[j] == i) {
        string S = "";
        for (int z = j; z < s.size() && z < j + k; z++) {
          S += s[z];
          if (m[S] == 0) {
            arr.push_back(S);
            cnt++;
            m[S]++;
          }
        }
      }
    }
  }
  sort(arr.begin(), arr.end());
  cout << arr[k - 1] << endl;
}