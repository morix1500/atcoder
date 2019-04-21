#include <bits/stdc++.h>
using namespace std;
static const int MAX = 25;
static const int NIL = -1;

struct Node {
  int parent, left, right;
};

vector<Node> nodes(MAX);
vector<int> parents(MAX);
vector<int> H(MAX), S(MAX);
vector<int> deg(MAX), dep(MAX), h(MAX);

int setHeight(int n, int d) {
  int h1    = 0;
  int h2    = 0;
  dep.at(n) = d;
  if (nodes.at(n).left == NIL && nodes.at(n).right == NIL) { return 1; }

  if (nodes.at(n).left != NIL) {
    h2                     = setHeight(nodes.at(n).left, d + 1);
    S.at(nodes.at(n).left) = nodes.at(n).right;
    deg.at(n)++;
  }
  if (nodes.at(n).right != NIL) {
    h1                      = setHeight(nodes.at(n).right, d + 1);
    S.at(nodes.at(n).right) = nodes.at(n).left;
    deg.at(n)++;
  }
  H.at(n) = max(h1, h2);

  return H.at(n) + 1;
}

int main() {
  int n;
  parents.at(0) = -1;
  S.at(0)       = -1;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int tmp = 0;
    cin >> tmp >> nodes.at(i).left >> nodes.at(i).right;
    if (nodes.at(i).left != NIL) { parents.at(nodes.at(i).left) = tmp; }
    if (nodes.at(i).right != NIL) { parents.at(nodes.at(i).right) = tmp; }
  }
  setHeight(0, 0);

  for (int i = 0; i < n; i++) {
    string type = "root";
    if (H.at(i) == 0) {
      type = "leaf";
    } else if (H.at(i) != 0 && i != 0) {
      type = "internal node";
    }
    cout << "node " << i << ": parent = " << parents.at(i)
         << ", sibling = " << S.at(i) << ", degree = " << deg.at(i)
         << ", depth = " << dep.at(i) << ", height = " << H.at(i) << ", "
         << type << endl;
  }
}