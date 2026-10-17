
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    set<char> line;

    for(int i = 0; i < n; i++)
    {
        line.insert(tolower(s[i]));
    }

    if(line.size() != 26)
        cout << "NO";
    else
        cout << "YES";

    return 0;
}