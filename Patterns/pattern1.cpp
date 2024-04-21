#include<iostream>
using namespace std;

int main(){
    int i=1,n;

    cin>>n;
while ( i<=n)
{
    int j=1;
    while (j<=n)
    {
        cout<<i;
        j=j+1;
    }
    cout<<'\n';
      
    i=i+1;
}
return 0;
}