#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// 最大公約数
int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}

// 配列出力
void arrayOutput(vector<int> arr) {
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

// 素数判定
bool isPrime(int num) {
  if (num < 2)
    return false;
  else if (num == 2)
    return true;
  else if (num % 2 == 0)
    return false;

  double sqrtNum = sqrt(num);
  for (int i = 3; i <= sqrtNum; i += 2) {
    if (num % i == 0) { return false; }
  }

  return true;
}

// エラトステネスのふるい
vector<int> eratosthenes() {
  int MAX = 101010;
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