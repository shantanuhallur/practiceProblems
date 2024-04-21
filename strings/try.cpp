#include <iostream>
using namespace std;

int add(int a,int b) {
    return (a+b);
};

int main()
{
    
    //create a fuction poiter
    int (*ptr)(int,int);
    ptr = add; 
    cout<<add(4,5);
    cout<<ptr(4,6);
    return 0;
}
