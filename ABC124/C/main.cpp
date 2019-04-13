#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main()
{
    string S;
    cin >> S;

    ll n = S.size();
    char start = S.at(0);
    bool zero = false;
    if (start == '0')
    {
        zero = true;
    }
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (zero)
        {
            if (S.at(i) != '0')
                res++;
        }
        else
        {
            if (S.at(i) != '1')
                res++;
        }
        zero = !zero;
    }

    cout << res << endl;
}