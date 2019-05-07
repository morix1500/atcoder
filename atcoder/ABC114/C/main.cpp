#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n   = 0;
int cnt = 0;

void dfs(ll s, bool three, bool five, bool seven) {
  if (s > n) { return; }

  if (three && five && seven) cnt++;

  dfs(s * 10 + 3, true, five, seven);
  dfs(s * 10 + 5, three, true, seven);
  dfs(s * 10 + 7, three, five, true);
}

int main() {
  cin >> n;
  dfs(0, false, false, false);
  cout << cnt << endl;
}