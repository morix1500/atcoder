#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    int N, X;
    cin >> N >> X;
    vector<int> x(N);
    for (int i = 0; i < N; i++)
    {
        cin >> x[i];
    }

    int g = 0;
    for (int i = 0; i < N; i++)
    {
        g = gcd(abs(X - x[i]), g);
    }
    cout << g << endl;
}