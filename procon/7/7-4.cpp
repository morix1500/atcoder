#include <bits/stdc++.h>
using namespace std;

void countingSort(vector<int> &A, vector<int> &B, int k) {
  vector<int> c(k);

  for (int j = 1; j < A.size(); j++) {
    c.at(A.at(j))++;
  }
  for (int i = 1; i < k; i++) {
    c.at(i) = c.at(i) + c.at(i - 1);
  }
  for (int j = A.size() - 1; j >= 1; j--) {
    B.at(c.at(A.at(j))) = A.at(j);
    c.at(A.at(j))--;
  }
}

int main() {
  int n;
  cin >> n;
  vector<int> A(n);
  vector<int> B(n + 1);
  for (int i = 0; i < n; i++) {
    cin >> A.at(i);
  }
  countingSort(A, B, 10000);

  for (int i = 0; i < n; i++) {
    cout << B.at(i) << " ";
  }
  cout << endl;
}