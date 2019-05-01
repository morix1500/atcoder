#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  map<string, int> arr;
  map<string, int> bMa;
  for (int i = 0; i < n; i++) {
    string tmp;
    cin >> tmp;
    if (arr[tmp] == 0) { arr[tmp]++; }
    bMa[tmp]++;
  }
  int m;
  cin >> m;
  map<string, int> rMa;
  for (int i = 0; i < m; i++) {
    string tmp;
    cin >> tmp;
    if (arr[tmp] == 0) { arr[tmp]++; }
    rMa[tmp]++;
  }

  int mx = 0;
  for (auto i = arr.begin(); i != arr.end(); i++) {
    int b = bMa[i->first];
    int r = rMa[i->first];
    mx    = max(mx, b - r);
  }
  cout << mx << endl;
}