#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    int max = INT_MIN, min = INT_MAX;
    int max_indx = 0, min_indx = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if(arr[i] > max)
        {
            max = arr[i];
            max_indx = i + 1;
        }

        if(arr[i] <= min)
        {
            min = arr[i];
            min_indx = i + 1;
        }
    }

    int count = max_indx - 1 + n - min_indx;

    if(max_indx > min_indx)
        count--;

    cout << count << endl;

    return 0;
}