#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int dig = 0;
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        dig = n % 10;
        ans = ans + (dig * pow(2, i));
        i++;
        n = n / 10;
    }
    cout << ans << endl;
}