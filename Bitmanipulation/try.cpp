#include <iostream>
using namespace std;

int main()
{
    int arr[8] = {
        1,
        2,
        9,
        3,
        2,
        7,
        6,
        5,
    };

    int b[15] = {0};
    cout << "arr array" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    cout << "b array" << endl;
    for (int i = 0; i < 6; i++)
    {

        cout << b[i] << " ";
    }
    b[arr[2]]++;
    cout << "\n";
    for (int i = 0; i < 15; i++)
    {

        cout << b[i] << " ";
    }
}