#include<iostream>
using namespace std;

int main(){
    int i=1,n;
    cin>>n;
    int a=1;
    while (i<=n)
    {
       int j=1;
       
       while (j<=n)
       {
           cout<<a<<" ";
           j++;
           a++;
       }
       i++;
       cout<<'\n';

    }
    




    return 0;
}