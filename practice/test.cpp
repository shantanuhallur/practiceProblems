#include<iostream>
using namespace std;


bool secondMax(string sd){
    string s = "nwes";
int n=0,w=0,e=0,s=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='n'){
            n++;
        }
        else if(s[i]=='w'){
            w++;
        }
        else if(s[i]=='e'){
            e++;
        }
        else if(s[i]=='s'){
            s++;
        }
    }

    if(n==s && e==w){
        return true;
    }
    else{
        return false;
    }

}

}

int main()
{

         secondMax(arr);
        string in = "nwes"
    return 0;
}