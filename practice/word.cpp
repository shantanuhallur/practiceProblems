#include <bits/stdc++.h>
using namespace std;

// string revString(string s)
// {
//     string ans = "";
//     string word = "";
//     for (int i = s.size(); i >= 0; i--)
//     {
//         if (s[i] != '.')
//         {
//             word += s[i];
//         }
//         else
//         {
//             reverse(word.begin(), word.end());
//             ans += word + '.';
//             word = "";
//         }
//     }
//     if(word!=""){
//          reverse(word.begin(), word.end());
//         ans+= word;
//     }

//     return ans;
// }

bool isPrime(int n)
{   if(n==1)return false;
    bool flag = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = false;
        }
    }

    return flag;
}

int sumOfPrime(int arr[])
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        if (isPrime(arr[i]))
        {
            sum += arr[i];
        }
    }
    return sum;
}

int main()
{

    // cout << revString(s);
    int arr[5] = {1, 5, 7, 13, 20};
    cout << sumOfPrime(arr);
    return 0;
}
