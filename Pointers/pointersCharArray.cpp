#include<iostream>
using namespace std;

int main()
{
    int arr[6] = {1,2,3,4,5};
    char ch[6] = "abcde";
    //cout<<&ch<<endl;
    cout<<arr<<endl;
    //attention here
    cout<<ch<<endl;


    char *c = &ch[0];
    //prints out entire string
    cout<<c<<endl;
     c = &ch[2];
    //prints entire string after 2 index;
    cout<<c<<endl;

    char temp = 'z';
    char* p = &temp;
    cout<<p<<endl;
    //cout<<&p<<endl;

/*
    while creation of any array first temp memory is created where we store the contents
    and then the name of created array gets mapped to symbol table and the whole content
    of temp memory is copied to the memory that the array name is assigned to. 2 step 
    process.





*/



    return 0;
}