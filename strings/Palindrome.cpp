#include <iostream>
using namespace std;

char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

int getlength(char name[])
{
    int length = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}

bool isPalindrome(char arr[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        if (toLowerCase(arr[s]) != toLowerCase(arr[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

int main()
{
    char name[10];
    cin >> name;
    int length = getlength(name);
    cout << isPalindrome(name, length) << endl;
    cout << "CHARACTER IS c to " << toLowerCase('c') << endl;
    cout << "CHARACTER IS C to " << toLowerCase('C') << endl;
}