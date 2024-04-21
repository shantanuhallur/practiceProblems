#include <bits/stdc++.h>
using namespace std;

freqCArr(string s)
{
    int arr[26] = {0};
    // "a sdasdasdasd" 48 - 48 = 1 -
    for (int i = 0; i < s.size(); i++)
    {
        int val = s[i] - 'a';
        arr[val]++;
    }

    for (int i = 0; i <= 25; i++)
    {
        cout << arr[i] << " ";
    }
}

freqCMap(string s)
{
    map<char, int> m;
    for (int i = 0; i < s.size(); i++)
    {
        if (m.find(s[i]) == m.end())
        {
            m[s[i]] = 1;
        }
        else
        {
            m[s[i]]++;
        }
    }

    for (auto x : m)
    {
        cout << x.first << " " << x.second << endl;
    }
}

freqCMapMod(string s)
{
    map<char, int> m;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'd' || s[i] == 'n')
        {
            if (m.find(s[i]) == m.end())
            {
                m[s[i]] = 1;
            }
            else
            {
                m[s[i]]++;
            }
        }
    }

    for (auto x : m)
    {
        cout << x.first << " " << x.second << endl;
    }
}

freqCArrMod(string s)
{
    int arr[26] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'd' || s[i] == 'n')
        {
            int val = s[i] - 'a';
            arr[val]++;
        }
    }

    for (int i = 0; i <= 25; i++)
    {
        cout << arr[i] << " ";
    }
}

int frequencyOfCharacters(string s)
{
    unordered_map<char, int> m;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = 'a' + (s[i] - 'A');
        }

        if (s[i] == 'b' || s[i] == 'f' || s[i] == 'j' || s[i] == 'p' || s[i] == 'v')
        {
            m[s[i]]++;
        }
    }
    int totalCount = 0;
    for (auto x : m)
    {
        cout << x.first << " " << x.second << endl;
        totalCount += x.second;
    }

    cout << "Total Count = " << totalCount;
}

int main()
{
    string s = "rajasoftwarelabsfFF";
    // freqCArr(s);
    // freqCMap(s);
    //   freqCMapMod(s);
    // freqCArrMod(s);
    frequencyOfCharacters(s);
    return 0;
}