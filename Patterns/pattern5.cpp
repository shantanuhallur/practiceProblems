#include<iostream>
using namespace std;

int main(){

    int i=1,n;
    cin>>n;
 
    while (i<=n)
    { int j=1;
      
        while (j<=i)
        {   
            cout<<i-j+1<<" ";    //can also print * for * pattern triangle
            j++;
            
        }

        i++;
        cout<<'\n';
        
    }
    


    return 0;
}