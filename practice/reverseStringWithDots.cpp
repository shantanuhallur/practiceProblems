#include <iostream>
using namespace std;

string revString(string s)
{
    string ans;
    string word;

    for (int i = s.size(); i >= 0; i–-)
    {
        if (s[i] != ‘.’)
        {
            word += s[i];
        }
        else
        {
            reverse(word.begin(), word.end());
            ans += word +’.’;
            word = ””;
        }
    }

    if (word !=””)
    {
        if (word !=’.’)
        {
            reverse(word.begin(), word.end());
            ans += word + ‘.’;
            word = “ ”;
        }
    }
    else
    {
        ans +=’.’;
    }

    return ans;
}

int main()
{
    string s;
    cin >> s;
    cout << revString(s);
    return 0;
}
