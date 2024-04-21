#include <iostream>
using namespace std;
bool subSeq(string &s1, string &s2)
{
    int j = 0;
    for (int i = 0; i < s1.size() && j < s2.size(); i++)
    {
        if (s1[i] == s2[j])
        {
            j++;
        }
    }

    return (j == s2.size());
}

int main()
{ //geeksforgeeks grges
    string s1, s2;
    cin >> s1 >> s2;

    cout << subSeq(s1, s2);

    return 0;
}