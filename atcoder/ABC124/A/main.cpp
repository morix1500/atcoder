#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main()
{
    int A, B;
    cin >> A >> B;

    int cnt = 0;
    int res = 0;
    while (cnt < 2)
    {
        if (A > B)
        {
            res += A;
            A--;
        }
        else
        {
            res += B;
            B--;
        }
        cnt++;
    }
    cout << res << endl;
}