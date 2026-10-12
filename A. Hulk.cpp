#include <bits/stdc++.h>
using namespace std;

void hate()
{
    cout << "I hate ";
}

void that()
{
    cout << "that ";
}

void love()
{
    cout << "I love ";
}

int main()
{
    int n;
    cin >> n;
    
    for(int i = 1; i <= n; i++)
    {
        if(i % 2 != 0)
            hate();
        else
            love();

        if(i != n)
            that();
    }

    cout << "it" << endl;
    return 0;
}