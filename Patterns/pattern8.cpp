#include<iostream>
using namespace std;


int main(){

    int i=1,n;
    cin>>n;
//By using iterative methong for columns
    // while (i<=n)
    // { int j=1;
    //    char ch = 'D'-i+1;
    //     while (j<=i)
    //     {  
    //         cout<<ch<<" ";    
    //         j++;
    //        ch++;
    //     }
    //     i++;
    //     cout<<'\n';       
    // }


      //By using 'D'-row+col; (universal method)

    while (i<=n)
        { int j=1;
            while (j<=i)
            {   char ch = 'D'-i+j;
                cout<<ch<<" ";    
                j++;
            }
            i++;
            cout<<'\n';       
        }

    return 0;
}