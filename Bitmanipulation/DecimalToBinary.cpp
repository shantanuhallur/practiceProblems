#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 0;
    int ans = 0;
    int dig = 0;
    while (n != 0)
    {

        dig = n & 1;
        ans = (dig * pow(10, i)) + ans;

        n = n >> 1;
        i++;
    }
    cout << ans << endl;
}