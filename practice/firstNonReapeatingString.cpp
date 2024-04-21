#include<bits/stdc++.h>
using namespace std;

int nonRepeat(string s , string &ans){
    map<char,int> m;
    for(int i=0;i<s.size();i++){
        if(m.find(s[i])==m.end()){
            m[s[i]]=1;
        }
        else{
            m[s[i]]++;
        }
    }
  
        for(int i=0;i<s.size();i++){
            if(m[s[i]]==1){
                ans=s[i];
               
                break;
            }
        
        }


    for(auto x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }

    return 1;

}



int main()
{
    string s = "acxdxcmvma";
    string ans = "";
    nonRepeat(s,ans);
    if(ans==""){
       cout<<"No Single Repeated char";
    }
    else{
        cout<< ans;
    }
    return 0;
}