#include<iostream>
using namespace std;

int main(){
    int i=1,n;
    cin>>n;
    while (i<=n)
    {   int spaces=n-i+1;
        while (spaces--)
        {
            cout<<" ";
        }
        i++;
        int j =1;
        while (j<i )
        {
            cout<<i-1;
            j++;
        }
        cout<<"\n";

        
        
       
    }
    
    return 0;
}