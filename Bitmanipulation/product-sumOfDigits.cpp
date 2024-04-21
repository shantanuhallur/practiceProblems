#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int product = 1, sum = 0;
    while (n != 0)
    {

        int no = n % 10;

        n = n / 10;
        product *= no;
        sum += no;
    }
    int result = product - sum;
    cout << result;
}