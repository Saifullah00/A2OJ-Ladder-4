// Ladder Name: 4 - Codeforces Div. 2, 112A  ---> https://codeforces.com/problemset/problem/112/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, res = 1;
    string s1, s2; 
    cin >> s1 >> s2;
    transform(s2.begin(),s2.end(), s2.begin(), ::toupper);

    int len = s1.length();

    for (i= 0; i < len; i++)
    {
        
        if (s1[i] == s2[i]+ 32)
        {
            res = 0; 
        }
        else if (s1[i] < s2[i] + 32)
        {
            res = -1; 
        }
    }
    cout<<res<<endl;

    return 0;
}