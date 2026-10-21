
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int l_x;
    cin >> l_x;

    vector<int> little_x;
    for (int i = 0; i < l_x; i++)
    {
        int x;
        cin >> x;
        little_x.push_back(x);
    }

    int l_y;
    cin >> l_y;

    vector<int> little_y;
    for (int i = 0; i < l_y; i++)
    {
        int x;
        cin >> x;
        little_y.push_back(x);
    }

    set<int> all;

    for (int i = 0; i < little_x.size(); i++)
    {
        all.insert(little_x[i]);
    }

    for (int i = 0; i < little_y.size(); i++)
    {
        all.insert(little_y[i]);
    }

    if(all.size() == n)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";

    return 0;
}
