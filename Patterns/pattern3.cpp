#include<iostream>
using namespace std;


int main(){

int i=1;
int n;
cin>>n;

while (i<=n)
{
    int j=1;
    while (j<=n)
    {
        cout<<n-j+1;
        j++;

    }
    cout<<'\n';
    
    i++;
    
}

return 0;
}