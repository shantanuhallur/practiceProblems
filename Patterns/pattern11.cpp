#include<iostream>
using namespace std;

int main(){
    int i=1,n;
    cin>>n;
    while (i<=n)
    {   int spaces = 1;
        while (spaces<=i-1)
        {
            cout<<" ";
            spaces++;
        }
        int j =1;
        while (j<=n-i+1)
        {
            cout<<"*";
            j++;
        }
        cout<<'\n';
        i++;  
    }
    
    return 0;
}