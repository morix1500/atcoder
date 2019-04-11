#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main()
{
    ll A, B;
    cin >> A >> B;

    ll c = 0;
    for (ll i = A; i <= B; i++)
    {
        if (i == A)
        {
            c = A;
            continue;
        }

        c = c ^ i;
    }

    cout << c << endl;
}