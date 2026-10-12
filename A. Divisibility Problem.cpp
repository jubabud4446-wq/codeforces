#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t)
    {
        int a, b;
        cin >> a >> b;

        int count = 0;

        while(a%b != 0)
        {
            count++;
            a++;
        }

        cout << count << endl;

        t--;
    }
    return 0;
}