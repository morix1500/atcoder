#include <bits/stdc++.h>
using namespace std;

vector<int> eratosthenes() {
  int MAX = 55555;
  vector<int> is_prime(MAX, 1);
  is_prime[0] = 0;
  is_prime[1] = 0;
  for (int i = 2; i < MAX; i++) {
    if (!is_prime[i]) continue;
    for (int j = i * 2; j < MAX; j += i)
      is_prime[j] = 0;
  }
  return is_prime;
}

int main() {
  int n;
  cin >> n;
  vector<int> e = eratosthenes();

  vector<int> res(n);

  int index = 0;
  int sum   = 0;
  vector<int> arr(n);
  int k   = 5;
  int pre = -1;
  for (int i = 0; i < e.size(); i++) {
    if (e[i] == 0 || i < k) { continue; }
    int tmp = i % k;
    if (tmp == 1) {
      arr[index] = i;
      sum += i;
      index++;
      if (index == n) {
        // aa
        break;
      }
    }
  }
  for (int i = 0; i < n; i++) {
    cout << arr[i];
    if (i != n - 1) { cout << " "; }
  }
  cout << endl;
}