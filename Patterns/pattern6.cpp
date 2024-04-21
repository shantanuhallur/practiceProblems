#include<iostream>
using namespace std;

// i+j-1 = 1 (formula)
// add 'A' - 1 to both sides 
// 'A'+i+j-2 = 'A'


int main(){

    int i=1,n;
    cin>>n;
    char ch = 'A';
    while (i<=n)
    { int j=1;
      ch = 'A'+i+j-2;
        while (j<=n)
        {   
            cout<<ch<<" ";    
            j++;
           ch++;
            

        }

        i++;
        cout<<'\n';
        
    }
    


    return 0;
}