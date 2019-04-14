#include <bits/stdc++.h>
using namespace std;

struct UnionFind {
  vector<int> par;

  UnionFind(int N) { init(N); }
  void init(int N) {
    par.resize(N);
    for (int i = 0; i < N; i++) {
      par.at(i) = i;
    }
  }

  int root(int x) {
    if (par[x] == x) { return x; }
    return par[x] = root(par[x]);
  }

  bool same(int x, int y) { return root(x) == root(y); }

  void unite(int x, int y) {
    x = root(x);
    y = root(y);
    if (x == y) return;

    par[x] = y;
  }
};

int main() {
  int N, Q;
  cin >> N >> Q;

  vector<int> P(Q);
  vector<int> A(Q);
  vector<int> B(Q);

  for (int i = 0; i < Q; i++) {
    cin >> P.at(i) >> A.at(i) >> B.at(i);
  }

  UnionFind uf(N);
  for (int i = 0; i < Q; i++) {
    if (P.at(i) == 0) {
      uf.unite(A.at(i), B.at(i));
    } else {
      if (uf.same(A.at(i), B.at(i))) {
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
    }
  }
}