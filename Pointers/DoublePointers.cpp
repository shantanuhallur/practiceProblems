#include<iostream>
using namespace std;





void update(int **p2){
    //p2 = p2+1;
    // kuch change hoga?? - NO

    //*p2 = *p2+1;
    //kuch change hoga??? - YES

    **p2 = **p2+1;
    //kuch change hoga?? - YES
}


int main()
{       
/*
    int i =5;
    int* p = &i;
    int** p2 = &p;

    // cout<<"printing address of i "<<&i<<endl;
    // cout<<"Printing content of p "<<p<<endl;
    // cout<<"printing address of p "<<&p<<endl;
    // cout<<"printing address of p "<<p2<<endl;
    // cout<<"printing address of i "<<*p2<<endl;
    // cout<<"printing address of value@i "<<*p<<endl;
    // cout<<"printing address of value@i "<<**p2<<endl;

    cout<<endl<<endl;
    cout<<"before "<<i<<endl;
    cout<<"before "<<p<<endl;
    cout<<"before "<<p2<<endl;
    update(p2);
    cout<<"after "<<i<<endl;
    cout<<"after "<<p<<endl;
    cout<<"after "<<p2<<endl;
    */



          
    return 0;
}