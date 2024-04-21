#include <iostream>
using namespace std;

int main()
{
    int num = 2;
    char a = 'a';
    a = a + num;
    cout << a << endl;

    char gh = '5';
    int test = 0;
    test = gh - '0' + 0;
    cout << test << endl;

    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            s[i] = 42;
        }
    }

    cout << s;

    //  for any conversion to any (upper / Lower ) just take
    //  the difference of the character needed with the starting character of that type upper/lower
    //  and add this weight to the conversion needed starting charater
    //  for example for character to number of 'd' just subtract 'a' from it and add the difference to 0

    return 0;
}