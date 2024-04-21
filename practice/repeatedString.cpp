#include<iostream>
using namespace std;
string remDupli(string s){ 
    if(s.length()==0)
    {return "";} char curr = s[0]; 
    string ans = remDupli(s.substr(1)); 
    if(curr==ans[0]){ return ans; 
    } 
    return curr+ans;
    }

string removeS(string s){
    string ans="";
    for (int i = 0; i < s.size()-1; i++)
    {   
        if (s[i]!=s[i+1])
        {
            ans += s[i];
        }
        
    }
    int i = s.size()-1;
    ans+= s[i];

    return ans;
    
}
int main(){
cout<<removeS("abac");
}
