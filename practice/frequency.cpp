#include <bits/stdc++.h>
using namespace std;


void countFreq(string arr, int n){
   
     unordered_map<char,int> m;
    for (int i = 0; i < n; i++)
    {
      if (m.find(arr[i]) == m.end())
    {
      m[arr[i]]=1;  
    }
    else
    {
        m[arr[i]]++;
    }
    }

    for (auto x:m)
        cout<<x.first<<" "<<x.second<<endl;
    
    
    
}

int main(){
    int n;
    cin>>n;
    string x;
    cin>>x;
    countFreq(x,n);
    return 0;

}