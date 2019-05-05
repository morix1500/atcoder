#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  vector<int> arr(6);
  for (int i = 0; i < s.size(); i++) {
    switch (s[i]) {
    case 'A':
      arr[0]++;
      break;
    case 'B':
      arr[1]++;
      break;
    case 'C':
      arr[2]++;
      break;
    case 'D':
      arr[3]++;
      break;
    case 'E':
      arr[4]++;
      break;
    case 'F':
      arr[5]++;
      break;
    }
  }
  for (int i = 0; i < 6; i++) {
    cout << arr[i];
    if (i != 5) cout << " ";
  }
  cout << endl;
}