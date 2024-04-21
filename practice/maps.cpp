// CPP program to count frequencies of array items
#include <bits/stdc++.h>
using namespace std;

void countFreq(int arr[], int n)
{
    unordered_map<int, int> mp;

    // Traverse through array elements and
    // count frequencies
    for (int i = 0; i < n; i++)
    {

        if (mp.find(arr[i]) == mp.end())
        {
            //  return "Not Present";
            mp[arr[i]] = 1;
        }
        else
        {
            mp[arr[i]]++;
        }
    }
    // Traverse through map and print frequencies
    for (auto x : mp)
        cout << x.first << " " << x.second << endl;
}

string drive(int choice)
{
    string ans = "default";
    map<int, string> m;
    m.insert(pair<int, string>(1, "one"));
    m.insert(pair<int, string>(2, "two"));
    m.insert(pair<int, string>(3, "three"));
    m.insert(pair<int, string>(4, "four"));
    m.insert(pair<int, string>(5, "five"));
    if (m.find(choice) != m.end())
        ans = m[choice];
    return ans;
}
#define dds(x) #x
#define glue(a, b) a##b
int main()
{
    // int arr[] = { 10, 20, 20, 10, 10, 20, 5, 20 };
    // int n = sizeof(arr) / sizeof(arr[0]);
    // countFreq(arr, n);
    // glue(c,out) << dds(ashdashdg);
    return 0;
}