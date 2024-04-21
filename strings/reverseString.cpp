#include <iostream>
using namespace std;

int getlength(char name[])
{
    int length = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}
void reverse(char name[], int s, int e)
{
    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
    cout << name;
}

int main()
{
    char name[20];
    cin >> name;
    int start = 0;
    int end = getlength(name) - 1;
    reverse(name, start, end);
    return 0;
}