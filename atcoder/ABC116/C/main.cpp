#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> h(n + 1);
  for (int i = 0; i < n; i++)
    cin >> h[i];

  int last = 0;
  int cnt  = 0;
  int zero = 0;
  queue<int> q;
  int i = 0;
  while (zero != n) {
    if (h[i] > 0) { q.push(i); }
    if (h[i] == 0) {
      bool c = false;
      while (!q.empty()) {
        int j = q.front();
        q.pop();
        h[j]--;
        c = true;
      }
      if (c) {
        cnt++;
      } else {
        zero++;
      }
    }
    if (i == n) {
      i    = 0;
      zero = 0;
    } else
      i++;
  }
  // int cnt = 0;
  // for (int i = 0; i < n; i++) {
  //  for (; h[i] > 0;) {
  //    for (int j = i; j < n && h[j] > 0; j++) {
  //      h[j]--;
  //    }
  //    cnt++;
  //  }
  //}
  cout << cnt << endl;
}