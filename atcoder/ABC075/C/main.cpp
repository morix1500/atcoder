#include <bits/stdc++.h>
using namespace std;

int N, M;
string s;

void dfs(vector<vector<int>> &L, int i) {
  if (s[i - 1] == '1') return;
  s[i - 1] = '1';

  for (int j = 0; j < L[i].size(); j++) {
    dfs(L, L[i][j]);
  }
}

int main() {
  cin >> N >> M;
  vector<int> a(M), b(M);
  for (int i = 0; i < M; i++) {
    cin >> a[i] >> b[i];
  }
  string st = "";
  string g  = "";
  for (int i = 0; i < N; i++) {
    st += "0";
    g += "1";
  }

  int cnt = 0;
  for (int i = 0; i < M; i++) {
    vector<vector<int>> L(N + 1);
    s = st;
    for (int j = 0; j < M; j++) {
      if (i == j) continue;
      L[a[j]].push_back(b[j]);
      L[b[j]].push_back(a[j]);
    }
    dfs(L, 1);
    if (s != g) { cnt++; }
  }
  cout << cnt << endl;
}