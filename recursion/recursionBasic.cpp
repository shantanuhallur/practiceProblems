#include <iostream>
using namespace std;

void print(int n)
{
    if (n == 0)
        return;

    print(n - 1);
    cout << n << endl;
}

int pow(int n)
{
    if (n == 0)
        return 1;

    return 2 * pow(n - 1);
}

int fact(int n)
{
    if (n == 0)
        return 1;

    return n * fact(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout<<"Count from 1 to "<<n<<" is "<<endl;
    print(n);
    cout << "Power of 2 raised to N is " << pow(n) << endl;
    cout << "Factorial of " << n << " is " << fact(n) << endl;

    return 0;
}