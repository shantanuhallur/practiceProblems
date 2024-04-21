#include<iostream>
using namespace std;


int main(){

    int i=1,n;
    cin>>n;
    //By using iterative methong for columns
    // while (i<=n)
    // { int j=1;
    //   char ch = 'A'+i-1;
    //     while (j<=i)
    //     {   
    //         cout<<ch<<" ";    
    //         j++;
    //        ch++;
    //     }
    //     i++;
    //     cout<<'\n';       
    // }

    //By using 'A'+row+col-2; (universal method)
    while (i<=n)
    { int j=1;
      
        while (j<=i)
        {   char ch = 'A'+i+j-2;
            cout<<ch<<" ";    
            j++;
           
        }
        i++;
        cout<<'\n';       
    }

    return 0;
}