#include <bits/stdc++.h>
using namespace std;

int H = 0;
vector<int> A;

int parent(int n) { return n / 2; }
int left(int n) { return 2 * n; }
int right(int n) { return 2 * n + 1; }

void maxHeapify(vector<int> &A, int i) {
  int l       = left(i);
  int r       = right(i);
  int largest = 0;
  if (l <= H && A.at(l - 1) > A.at(i - 1)) {
    largest = l;
  } else {
    largest = i;
  }
  if (r <= H && A.at(r - 1) > A.at(largest - 1)) { largest = r; }

  if (largest != i) {
    swap(A.at(i - 1), A.at(largest - 1));
    maxHeapify(A, largest);
  }
}

int heapExtractMax() {
  if (H < 1) return 0;
  int max = A.at(0);
  A.at(0) = A.at(H - 1);
  H--;
  maxHeapify(A, 1);

  return max;
}

void heapIncreaseKey(int i, int key) {
  if (key < A.at(i - 1)) { return; }
  A.at(i - 1) = key;
  int p       = parent(i);
  while (i > 1 && A.at(p - 1) < A.at(i - 1)) {
    swap(A.at(i - 1), A.at(p - 1));
    i = p;
  }
}

void insert(int key) {
  H++;
  A.push_back(-INFINITY);
  heapIncreaseKey(H, key);
}

int main() {
  string cmd;

  cin >> cmd;
  while (cmd != "end") {
    if (cmd == "insert") {
      int n;
      cin >> n;
      insert(n);
    } else if (cmd == "extract") {
      int e = heapExtractMax();
      cout << e << endl;
    }
    cin >> cmd;
  }
}