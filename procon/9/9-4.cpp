#include <bits/stdc++.h>
using namespace std;

struct Node {
  int key;
  Node *parent, *left, *right;
};

Node *root, *NIL;

void insert(int k) {
  Node *y = NIL;
  Node *x = root;
  Node *z;

  z        = (Node *)malloc(sizeof(Node));
  z->key   = k;
  z->left  = NIL;
  z->right = NIL;

  while (x != NIL) {
    y = x;
    if (z->key < x->key) {
      x = x->left;
    } else {
      x = x->right;
    }
  }
  z->parent = y;
  if (y == NIL) {
    root = z;
  } else {
    if (z->key < y->key) {
      y->left = z;
    } else {
      y->right = z;
    }
  }
}

Node *find(int k) {
  Node *x = root;
  while (x != NIL) {
    if (x->key == k) {
      return x;
    } else if (x->key < k) {
      x = x->right;
    } else {
      x = x->left;
    }
  }
  return NIL;
}

Node *getMinimum(Node *x) {
  while (x->left != NIL) {
    x = x->left;
  }
  return x;
}

Node *getSuccessor(Node *x) {
  if (x->right != NIL) { return getMinimum(x->right); }
  Node *y = x->parent;
  while (y != NIL && x == y->right) {
    x = y;
    y = y->parent;
  }
  return y;
}

void deleteNode(Node *z) {
  Node *y;
  Node *x;
  if (z->left == NIL || z->right == NIL) {
    y = z;
  } else {
    y = getSuccessor(z);
  }
  if (y->left != NIL) {
    x = y->left;
  } else {
    x = y->right;
  }

  if (x != NIL) { x->parent = y->parent; }

  if (y->parent == NIL) {
    root = x;
  } else if (y == y->parent->left) {
    y->parent->left = x;
  } else {
    y->parent->right = x;
  }
  if (y != z) { z->key = y->key; }
}

void inorder(Node *u) {
  if (u == NIL) return;
  inorder(u->left);
  printf(" %d", u->key);
  inorder(u->right);
}

void preorder(Node *u) {
  if (u == NIL) return;
  printf(" %d", u->key);
  preorder(u->left);
  preorder(u->right);
}

int main() {
  int n, i, x;
  string com;

  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    cin >> com;
    if (com == "insert") {
      scanf("%d", &x);
      insert(x);
    } else if (com == "find") {
      scanf("%d", &x);
      Node *r = find(x);
      if (r == NIL) {
        cout << "no" << endl;
      } else {
        cout << "yes" << endl;
      }
    } else if (com == "delete") {
      scanf("%d", &x);
      deleteNode(find(x));
    } else if (com == "print") {
      inorder(root);
      cout << endl;
      preorder(root);
      cout << endl;
    }
  }
}