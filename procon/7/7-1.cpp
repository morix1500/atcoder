#include <bits/stdc++.h>
using namespace std;
#define MAX 500000
#define SENTINEL 2000000

int n;
int cnt = 0;
vector<int> S(MAX);
vector<int> L(MAX / 2 + 2);
vector<int> R(MAX / 2 + 2);

void merge(int left, int mid, int right) {
  int n1 = mid - left;
  int n2 = right - mid;

  for (int i = 0; i < n1; i++) {
    L.at(i) = S.at(left + i);
  }
  for (int i = 0; i < n2; i++) {
    R.at(i) = S.at(mid + i);
  }
  L.at(n1) = 2000000;
  R.at(n2) = 2000000;

  int i = 0;
  int j = 0;

  for (int k = left; k < right; k++) {
    cnt++;
    if (L.at(i) <= R.at(j)) {
      S.at(k) = L.at(i);
      i++;
    } else {
      S.at(k) = R.at(j);
      j++;
    }
  }
}

void mergeSort(int left, int right) {
  if (left + 1 < right) {
    int mid = (left + right) / 2;
    mergeSort(left, mid);
    mergeSort(mid, right);
    merge(left, mid, right);
  }
}

int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> S.at(i);
  }

  mergeSort(0, n);

  for (int i = 0; i < n; i++) {
    cout << S.at(i) << " ";
  }
  cout << endl;
  cout << cnt << endl;
}