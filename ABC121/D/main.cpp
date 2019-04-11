#include <bits/stdc++.h>
using namespace std;

vector<int> to2(int num)
{
    vector<int> res;
    while (true)
    {
        if (num <= 1)
        {
            res.push_back(1);
            break;
        }

        int tmp = num % 2;
        res.push_back(tmp);
        if (tmp == 1)
        {
            num = (num - 1) / 2;
        }
        else
        {
            num /= 2;
        }
    }
    return res;
}

int main()
{
    int A, B;
    cin >> A >> B;

    vector<vector<int>> c;
    vector<int> cSize;
    int maxSize = 0;

    for (int i = A; i <= B; i++)
    {
        vector<int> tmp = to2(i);
        c.push_back(tmp);
        cSize.push_back(tmp.size());
        if (maxSize < tmp.size())
        {
            maxSize = tmp.size();
        }
    }

    int l = c.size();
    vector<int> res(maxSize);

    int index = 0;
    while (true)
    {
        int x = 0;
        int err = 0;
        for (int i = 0; i < l; i++)
        {
            if (index >= cSize.at(i))
            {
                err++;
                continue;
            }
            x += c.at(i).at(index);
        }
        res[index] = x % 2;
        if (err >= maxSize)
        {
            break;
        }
        index++;
    }
    int num = 0;
    for (int i = 0; i < res.size(); i++)
    {
        if (res.at(i) == 1)
        {
            num += pow(2, i);
        }
    }
    cout << num << endl;
}