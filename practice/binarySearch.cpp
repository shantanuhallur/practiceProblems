#include <iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int k)
{
    int s = start;
    int e = end;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] < k)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }

    return -1;
}

int main()
{
    int k = 4;
    int arr[6] = {1, 2, 3, 4, 5, 6};
    cout << binarySearch(arr, 0, 5, k);
    return 0;
}