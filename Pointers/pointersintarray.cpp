#include<iostream>
using namespace std;

int main()
{
    int arr[10]={1,32,3,4,5,6,7,8,9,10};
   int i =1;
    cout<<"address of first memory block is "<<arr<<endl;
    cout<<"address of first memory block is "<<&arr[0]<<endl;
    cout<<"address of second memory block is "<<&arr[1]<<endl;
    cout<<"value at which *arr points to is "<<*arr<<endl;
    cout<<"i[arr] is & *(i + arr) is "<<i[arr]<<" & "<<*(i+arr)<<endl;

    // arr[i] = *(arr+i);

    cout<<"value at which *arr points to added a place after that and the value is "<<*(arr+1)<<endl;
    cout<<"value at which *arr points to and adding 4 to it is "<<*arr+4<<endl;
     
     /* DIfference between arrays and pointers
        array size = sizeof(int/float/char) X No of elements in array.
        Pointer size = address of any reference index of array usually 4 or 8.

        &arr AND &p each give their own addresses.

        Symbol table contents cannot be changed. (array address in symbol table)
        but we can change adress of pointer as it moves to the next value in array if
        assigned to first element a[0] of array it will moove to second element
        of array-> arr[1].  

    */

   cout<<"Size of array is "<<sizeof(arr)<<endl;
   int* ptr = & arr[0];
   cout<<"Size of ptr is "<<sizeof(ptr)<<endl;
   cout<<"Size of value ptr is pointing to is "<<sizeof(*ptr)<<endl;
      cout<<"Size of ptr is "<<sizeof(&ptr)<<endl;

    /* 
     cout function is differently implemented for int & char arrays;
     cout prints adress of arr when cout<<arr while cout prints 
     whole char array when cout<<ch we get "abcd".

    */





    return 0;
}