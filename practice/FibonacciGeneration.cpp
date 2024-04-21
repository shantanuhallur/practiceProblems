#include<bits/stdc++.h>
using namespace std;


int main(){
    int n1=0,n2=1,n3,number,sum;
    sum=1;
    cin>>number;
    cout<<n1<<" "<<n2;

    for (int i = 2; i < number; i++)
    {
        n3=n2+n1;
        cout<<" "<<n3;
        n1=n2;
        n2=n3;
        sum+=n3;
    }
    
    cout<<"Sum till Fib "<<number<<" is"<<sum;
}
