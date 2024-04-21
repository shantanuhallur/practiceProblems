#include <iostream>
#include <vector>
using namespace std;

bool isDistinct(string s, int i, int j)
{
    vector<bool> visited(26);
    for (int k = i; k <= j; k++)
    {
        if (visited[s[k] - 'a'] == true)
        {
            return false;
        }
        visited[s[k] - 'a'] = true;
    }
    return true;
}

int lengthOfstring(string s)
{
    int n = s.size();
    int res = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (isDistinct(s, i, j))
            {
                res = max(res, j - i + 1);
                // cout << res << " " << j << " " << i;
            }
        }
    }
    return res;
}
int main()
{
    //abcabcbb
    string s;
    cin >> s;
    int len = lengthOfstring(s);
    cout << len;
    return 0;
}