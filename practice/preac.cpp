#include<iostream>
using namespace std;


int myF(string s){
        int count =0;

        for(int i=0;i<s.size();i++){
            
            if(s[i]=='n'){
                count++;
            }
            else if(s[i]=='e'){
                count++;
            }
            else if(s[i]=='w'){
                count--;
            }
            else if(s[i]=='s'){
                count--;
            }
        }
        
       
    return count;
}

int main()
{
    string s;
    cin>>s;
    if(myF(s)==0){
        cout<<"ORIGINAL PLACE";
    }
    else{
        cout<<"NOT ORIGINAL PLACE";
    }
    return 0;
}