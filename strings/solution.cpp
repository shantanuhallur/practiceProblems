#include <iostream>
#include <algorithm>
using namespace std;

string solution(string &S)
{
    // write your code in C++14 (g++ 6.2.0)
    int max = 0;
    int n = S.size();
    int arr[10];
    for (int i = 0; i < S.size(); i++)
    {
        arr[S[i]]++;
    }
    for (int i = 0; i < S.size(); i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    if (arr[0] == S.size())
    {
        return 0;
    }
    else if (max == 1)
    {
        sort(S.begin(), S.end(), S);
    }
}