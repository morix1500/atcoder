#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main()
{
    int A, B, K;
    cin >> A >> B >> K;

    int a = A;
    if (a < B)
    {
        a = B;
    }
    vector<int> res;
    for (int i = 1; i <= a; i++)
    {
        if (A % i == 0 && B % i == 0)
        {
            res.push_back(i);
        }
    }
    cout << res.at(res.size() - K) << endl;
}