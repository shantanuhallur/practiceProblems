#include<iostream>
using namespace std;

string comp(string s){
    int count =1;
    int i =0;
    string ans="";
   while (i+1<s.size() )
   {
       if(s[i]==s[i+1]){
           i++;
           count++;
       }
       else{
           ans+= s[i];
           if(count>1){
           ans+= '0' + count;
           }
           count=1;
           i=i+1;
       }
   }
   if(count==1){
       ans+= s[i];
   }
   else{
       ans+= s[i];
           ans+= '0' + count;
           count=1;
           i=i+1;
   }
   
    return ans;
}

int main()
{
    string s;
    cin>>s;
    cout<<comp(s);
    return 0;
}

