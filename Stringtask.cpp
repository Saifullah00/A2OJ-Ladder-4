// Ladder Name: 4 - Codeforces Div. 2, 118A  ---> https://codeforces.com/problemset/problem/118/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string vowels = {'a', 'i', 'o', 'e', 'u', 'y'};
    string user_input;
    cin >> user_input;
    transform(user_input.begin(), user_input.end(), user_input.begin(), ::tolower);

    for (int i = 0; i < 6; i++)
    {
        user_input.erase(remove(user_input.begin(), user_input.end(), vowels[i]), user_input.end());
    }

    int length = user_input.length();
    for (int i = 0; i < length; i++)
    {
        cout << '.' << user_input[i];
    }
    return 0;
}