#include <bits/stdc++.h>
using namespace std;

int main()
{
    string in;
    cin >> in;

    for(char x : in)
    {
        if(x == 'H' || x== 'Q' || x == '9')
        {
            cout << "YES";
            return 0;
        }
    }
    
    cout << "NO";

    return 0;
}