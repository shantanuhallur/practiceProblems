#include<iostream>
using namespace std;


int main(){

    int i=1,n;
    cin>>n;
    //using while for row / column / spaces in nested and remaining for column stars.
    // while (i<=n)
    //     { int j=1;
    //         while (j<=n)
    //         {
    //             while (j<=n-i)
    //             {
    //                 cout<<" ";
    //                 j++;
    //             }
    //             cout<<"*";
    //             j++;                                  
    //         }
    //         i++;
    //         cout<<'\n';       
    //     }

//using while for row then directly for spaces and stars seperately.
    while (i<=n)
    {
        int spaces = n-i;
        while (spaces--)
        {
            cout<<" ";
            
        }
        int j=1;
        while (j<=i)
        {
            cout<<"*";
            j++;
        }
        i++;
         cout<<'\n';
    }
    

    return 0;
}