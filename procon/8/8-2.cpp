#include <bits/stdc++.h>
using namespace std;

void disp(vector<vector<int>> &c, vector<int> &id, vector<int> &k, int i,
          int parent, int depth) {
  cout << "node " << id.at(i) << ": parent = " << parent
       << ", depth = " << depth;
  if (k.at(i) == 0) {
    cout << ", leaf, []" << endl;
  } else {
    if (parent == -1) {
      cout << ", root, [";
    } else {
      cout << ", internal node, [";
    }
    for (int j = 0; j < k.at(i); j++) {
      cout << c.at(i).at(j);
      if (j == k.at(i) - 1) {
        cout << "]" << endl;
      } else {
        cout << ", ";
      }
    }
  }
  if (k.at(i) != 0) {
    depth++;
    for (int j = 0; j < k.at(i); j++) {
      disp(c, id, k, c.at(i).at(j), i, depth);
    }
  }
}

int main() {
  int n;
  cin >> n;
  vector<int> id(n), k(n);
  vector<vector<int>> c(n, vector<int>(20));

  for (int i = 0; i < n; i++) {
    cin >> id.at(i) >> k.at(i);
    for (int j = 0; j < k.at(i); j++) {
      cin >> c.at(i).at(j);
    }
  }

  disp(c, id, k, 0, -1, 0);
}