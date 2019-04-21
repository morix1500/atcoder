#include <bits/stdc++.h>
using namespace std;
static const int MAX = 25;
static const int NIL = -1;

struct Node {
  int parent, left, right;
};

void preorder(vector<Node> &nodes, int n) {
  cout << n << " ";
  if (nodes.at(n).left != NIL) { preorder(nodes, nodes.at(n).left); }
  if (nodes.at(n).right != NIL) { preorder(nodes, nodes.at(n).right); }
}

void inorder(vector<Node> &nodes, int n) {
  if (nodes.at(n).left != NIL) { inorder(nodes, nodes.at(n).left); }
  cout << n << " ";
  if (nodes.at(n).right != NIL) { inorder(nodes, nodes.at(n).right); }
}

void postorder(vector<Node> &nodes, int n) {
  if (nodes.at(n).left != NIL) { postorder(nodes, nodes.at(n).left); }
  if (nodes.at(n).right != NIL) { postorder(nodes, nodes.at(n).right); }
  cout << n << " ";
}

int main() {
  int n;
  cin >> n;
  vector<Node> nodes(n);
  nodes.at(0).parent = NIL;

  for (int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp >> nodes.at(i).left >> nodes.at(i).right;
    if (nodes.at(i).left != NIL) { nodes.at(nodes.at(i).left).parent = tmp; }
    if (nodes.at(i).right != NIL) { nodes.at(nodes.at(i).right).parent = tmp; }
  }

  cout << "Preorder" << endl;
  cout << " ";
  preorder(nodes, 0);
  cout << endl;
  cout << "Ineorder" << endl;
  cout << " ";
  inorder(nodes, 0);
  cout << endl;
  cout << "Postorder" << endl;
  cout << " ";
  postorder(nodes, 0);
  cout << endl;
}