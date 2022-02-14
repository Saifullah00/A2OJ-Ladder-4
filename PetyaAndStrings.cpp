// Ladder Name: 4 - Codeforces Div. 2, 112A  ---> https://codeforces.com/problemset/problem/112/A
#include <bits/stdc++.h>
using namespace std;

string a, b;
int main()
{
    cin >> a >> b;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] < 92)
        {
            a[i] += 32;
        }
        if (b[i] < 92)
        {
            b[i] += 32;
        }
    }
    if (a < b)
    {
        cout << -1;
    }
    else if (a > b)
    {
        cout << 1;
    }
    else if (a == b)
    {
        cout << 0;
    }
}