#include <iostream>
using namespace std;
void func(double a, int b)
{
    cout << a << b ;
}
int main(int argc, char const *argv[])
{

    int i = 15;
    int c = 17;
    int &j = i;

    func(1,3.00);
    return 0;
}
