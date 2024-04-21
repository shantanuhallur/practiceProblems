#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    //Address of Operator -> &
    cout << &num << endl;
    int i = 69;
    int *ptr = &i;
    //print address stored in ptr
    cout << ptr << endl;
    //print value ptr points to using DEREFERENCE OPERATOR;
    // *P = Value at address pointed by P.
    //cout<< i AND cout<<*ptr BOTH will give same value;
    cout << *ptr << endl;

    cout << "Size Of int pointer is " << sizeof(ptr) << endl;
    long long t = 9.33;
    long long *ptr2 = &t;
    cout << "Size Of long long is " << sizeof(t) << endl;
    cout << "Size Of long pointer is " << sizeof(ptr2) << endl;
    // Any time even if float int or long pointer saves address so size is constant 4 or 8 bytes.

    //another way of declaring pointer
    int r = 5;
    int *p = &r;
    int *pr = 0;
    pr = &r ;
    cout<<p<<" "<<*p<<" "<<pr<<" "<<*pr<<endl;

    // pointer can be directly assigned another pointer without & operator for right side pointer.
    int *q = pr;
    cout<<q<<"->"<<"q "<<*q<<"->*q"<<endl;

    //important concept
        int v = 3;
        int *g = &v;
        *g = *g +1;
        cout<< *g <<" *g "<<endl;
        cout<<"before t"<< g << endl;
        g=g+1;
        cout<<"After t" << g << endl;



    return 0;
}