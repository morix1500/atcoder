#include <bits/stdc++.h>
using namespace std;

int n, m;

bool frend(vector<vector<int>> &M, vector<int> &memo, int i, int t) {
  if (memo[i] == 1) return false;
  for (int z = 0; z < n; z++) {
    if (M[i][z] == 0) continue;
    if (M[i][z] == 1 && z == t) return true;
    memo[i] = 1;
    if (frend(M, memo, z, t)) { return true; }
  }
  return false;
}

int main() {
  cin >> n >> m;
  vector<vector<int>> M(n, vector<int>(n));

  for (int i = 0; i < m; i++) {
    int id, f;
    cin >> id >> f;
    M[id][f] = 1;
    M[f][id] = 1;
  }
  int qn;
  cin >> qn;
  vector<vector<int>> q(qn, vector<int>(2));
  for (int i = 0; i < qn; i++) {
    cin >> q[i][0] >> q[i][1];
  }

  for (int i = 0; i < qn; i++) {
    vector<int> memo(n);
    bool res = frend(M, memo, q[i][0], q[i][1]);
    if (res) {
      cout << "yes" << endl;
    } else {
      cout << "no" << endl;
    }
  }
}