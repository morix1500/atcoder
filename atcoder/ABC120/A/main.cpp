#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    ;

    int res = 0;
    for (int i = B - A; i >= 0; i = i - A)
    {
        if (res >= C || i < 0)
        {
            break;
        }
        res++;
    }
    cout << res << endl;
}