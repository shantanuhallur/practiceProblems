#include<bits/stdc++.h>
using namespace std;


int main(){
    char s1[100],s2[100];
    cin>>s1>>s2;
    int a,b;
   a = strlen(s1);
   b = strlen(s2);
   bool flag=true;
    map<char,int> m;
    if(a==b){
        for (int i = 0; i < a; i++)
        {
        
        if(m.find(s1[i])==m.end()){
            m[s1[i]]=1;
        }
        else{
            m[s1[i]]++;
        }

        }

        for (int i = 0; i < b; i++)
        {
            if(m.find(s2[i])==m.end()){
                
                flag = false;
                break;
            }
            else{
                m[s2[i]]--;
            }
        }

        for (auto x:m)
        {if(x.second<0)
            {
            flag = false;
            }
            
        }
        if(flag){
        cout<<"Yes Anagram";
        }
        else{
            cout<<"Not Anagram";
        }
        
    }
    else{
        cout<<"Not Anagram";
    }
 
}