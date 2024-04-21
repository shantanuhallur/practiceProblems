#include<iostream>
using namespace std;

string alternateString(string s){
    string ans;
    string word;
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i] != '.'){
            word+=s[i];
        }
        else{
            if(count%2==0){
                ans+=word + ".";
                word="";    
                count++;            
            }
            else{
                ans+="abc.";
                word="";
                count++;    
            }
        }
    }

    if(word!=""){
        if(count%2==0){
                ans+=word;
                word="";    
                count++;            
            }
            else{
                ans+="abc";
                word="";
                count++;    
            }
    }
    

return ans;
}


int main()
{
    string s;
    //cin>>s;
    s = "i.like.this.program.very.much";
    cout<<alternateString(s);
    return 0;
}