#include <iostream>
using namespace std;

int main()
{
    int i = 0, n;
    cin >> n;
    while (i <= n)
    {
        int j = 0;

        while (j < i)
        {
            cout << " ";
            j++;
        }
        int k = 1;
        while (k <= n - i)
        {
            cout << k + i;
            k++;
        }
        i++;

        cout << "\n";
    }

    return 0;
}