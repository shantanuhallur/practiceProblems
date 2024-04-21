#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n;
    cin >> k >> n;
    int arr[5] = {7,
                  10,
                  4,
                  20,
                  15};
    int count = k;
    k = INT_MIN;
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        if (k < arr[i])
        {
            k = arr[i];
            count--;
        }
        if (count == 0)
            break;
    }

    return k;
}