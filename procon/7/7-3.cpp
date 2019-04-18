#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &A, vector<char> &g, int p, int r) {
  int x = A.at(r);
  int i = p - 1;

  for (int j = p; j < r; j++) {
    if (A.at(j) <= x) {
      i++;
      swap(A.at(i), A.at(j));
      swap(g.at(i), g.at(j));
    }
  }
  swap(A.at(i + 1), A.at(r));
  swap(g.at(i + 1), g.at(r));
  return i + 1;
}

void quickSort(vector<int> &A, vector<char> &g, int p, int r) {
  if (p < r) {
    int q = partition(A, g, p, r);
    quickSort(A, g, p, q - 1);
    quickSort(A, g, q + 1, r);
  }
}

int main() {
  int n;
  cin >> n;
  vector<char> g(n);
  vector<char> g2(n);
  vector<int> A(n);

  for (int i = 0; i < n; i++) {
    cin >> g.at(i) >> A.at(i);
  }
  g2 = g;

  quickSort(A, g2, 0, n - 1);

  if (equal(g.cbegin(), g.cend(), g2.cbegin())) {
    cout << "Stable" << endl;
  } else {
    cout << "Not stable" << endl;
  }

  for (int i = 0; i < n; i++) {
    cout << g2.at(i) << " " << A.at(i) << endl;
  }
}