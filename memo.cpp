#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int int32num = INT_MAX;
ll int64num  = LLONG_MAX;

// ゼロ埋め
void zeroume() {
  int h = 23, m = 59, s = 59;
  printf("%02d:%02d:%02d\n", h, m, s);
}

// YES/NO
void yesorno() {
  // aa
  cout << (true ? "YES\n" : "NO\n");
}
// 検索
void arrayFind() {
  vector<char> ch = {'a'};
  auto ite        = find(ch.begin(), ch.end(), m);
}

// 10の9乗 + 7
int m = 1000000007;

// 最大公約数
int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}

// 最小公倍数
int lcm(int a, int b) { return a / gcd(a, b) * b; }

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

// 階乗
int factorial(int n) {
  if (n == 0) return 1;
  return n * factorial(n - 1);
}

// 順列 permutation: falseなら組み合わせ
int combination(int n, int r, bool permutation) {
  if (n <= 1) return n;
  int p   = factorial(n) / factorial(n - r);
  int res = p;
  if (!permutation) { res /= factorial(r); }
  return res;
}

// 組み合わせ(2通り選ぶ場合)
int num = 3;
int n   = num * (num - 1) / 2;

// 総和
int n = num * (num + 1) / 2;

// 素因数分解
vector<int> decompositPrime(int num) {
  int a = 2;
  vector<int> arr;
  while (num >= a * a) {
    if (num % a == 0) {
      arr.push_back(a);
      num /= a;
    } else {
      a++;
    }
  }
  arr.push_back(num);
  // for (int i = 0; i < arr.size(); i++) {
  //  cout << arr[i] << " ";
  //}

  // cout << endl;
  return arr;
}

// 切り上げ
int num = ceil(10.0);
// 切り捨て(デフォルト)
int num = floor(10.0);
// 四捨五入
int num = round(10.0);
// 平方根
int num = sqrt(num);

void oomozi() {
  // 小文字 -> 大文字
  string str = "hoge";
  char(str[0] - ('a' - 'A'));
  // 大文字 -> 小文字
  string str2 = "HOGE";
  char(str2[0] - ('A' - 'a'));
  // 全部小文字
  transform(str.begin(), str.end(), str.begin(), ::tolower);
}

// 文字列 全置換
void replace_all() {
  string s = "hoge,hoge";
  replace(s.begin(), s.end(), ',', ' ');
}

// 文字列 全置換
void replaceAll(string &str, string from, string to) {
  int pos = str.find(from);
  if (pos == -1) return;

  str.replace(pos, from.size(), to);
  replaceAll(str, from, to);
}

// 直方体
void tyokuhoutai() {
  // 体積
  int tate = 1, yoko = 1, oku = 1;
  cout << tate * yoko * oku;
  // 表面積
  cout << 2 * ((tate * yoko) + (yoko * oku) + (tate * oku));
}

// 浮動小数点の桁数指定の標準出力
void floatDouble() {
  double num = 1.0;
  cout << fixed << setprecision(7) << num * M_PI << endl;
}

// 10進数から2進数
string binaryStr(int bina) {
  string ans = "";
  for (int i = 0; bina > 0; i++) {
    int b = bina % 2;
    ans   = ans + to_string(b);
    bina  = (bina - b) / 2;
  }
  reverse(ans.begin(), ans.end());
  return ans;
}

// 2進数 文字列マッチ
void binaryMatch(int num) {
  string b  = binaryStr(num);
  string bi = binaryStr(num);
  if (b[b.size() - bi.size()] == '1') { cout << "match" << endl; }
}

// 10進数から2進数（整数）
int binary(int bina) {
  int ans = 0;
  for (int i = 0; bina > 0; i++) {
    ans  = ans + (bina % 2) * pow(10, i);
    bina = bina / 2;
  }
  return ans;
}

// 時間計測
void time() {
  chrono::system_clock::time_point start, end;
  start = chrono::system_clock::now();
  end   = chrono::system_clock::now();
  double elasped =
      chrono::duration_cast<chrono::milliseconds>(end - start).count();
}

// 約数列挙
vector<int> divisor(int n) {
  vector<int> ret;
  for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      ret.push_back(i);
      if (i * i != n) ret.push_back(n / i);
    }
  }
  sort(begin(ret), end(ret));
  return (ret);
}

// 中央値
void median(vector<int> b) {
  sort(b.begin(), b.end());
  int m      = b.size() / 2;
  int median = b.size() % 2 == 0 ? (b[m] + b[m - 1]) / 2 : b[m];
}

// 二分探索
void binary_search(int key) {
  vector<int> A = {1, 2, 3, 4, 5};

  // key以上のイテレータを取得(Keyが見つからない場合は配列の最後のイテレータになる)
  auto ite = lower_bound(A.begin(), A.end(), key);
  // -- index取得
  int index1 = ite - A.begin();
  // -- 末尾取得
  int index2 = A.end() - ite;
}

// 文字列分割
vector<string> split(string s, char del) {
  int first = 0;
  int last  = s.find_first_of(del);
  vector<string> res;

  if (last == string::npos) {
    res.push_back(s);
    return res;
  }

  while (first < s.size()) {
    string subStr(s, first, last - first);
    res.push_back(subStr);
    first = last + 1;
    last  = s.find_first_of(del, first);
    if (last == string::npos) { last = s.size(); }
  }
  return res;
}