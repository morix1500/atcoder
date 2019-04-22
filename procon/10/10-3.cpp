#include <bits/stdc++.h>
using namespace std;

int H;

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

void buildMaxHeap(vector<int> &A) {
  for (int i = H / 2; i >= 1; i--) {
    maxHeapify(A, i);
  }
}

int main() {
  cin >> H;
  vector<int> A(H);
  for (int i = 0; i < H; i++) {
    cin >> A.at(i);
  }
  buildMaxHeap(A);
  for (int i = 0; i < H; i++) {
    cout << A.at(i) << " ";
  }
  cout << endl;
}