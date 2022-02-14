// Ladder Name: 4 - Codeforces Div. 2, 71A  --->  https://codeforces.com/problemset/problem/71/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0;
    int n;
    cin >> n;
    string s;
    while (n != 0)
    {
        cin >> s;
        n--;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int length_of_String = s.length();
        if (length_of_String <= 10) 
            cout << s << endl;
        else if(length_of_String > 10)
        {
            for (int i = 1; i < (length_of_String - 1); i++)
            {
                count++;
            }
            cout<<s[0]<<count<<s[length_of_String-1]<<endl;   
            int Prev_count = count;
            count -= Prev_count;                  
        }
    }

    return 0;
}