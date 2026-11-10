#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;

    int a = 100, b = 20, c = 10, d = 5, e = 1;

    count += n / a;
    n %= a;

    count += n / b;
    n %= b;

    count += n / c;
    n %= c;

    count += n / d;
    n %= d;

    count += n / e;
    n %= e;

    cout << count << endl;

    return 0;
}