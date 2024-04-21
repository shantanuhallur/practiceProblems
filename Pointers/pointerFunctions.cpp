#include<iostream>
using namespace std;


void print(int* p){

    cout<<*p<<endl;
}
void update(int* p){

    //incrementing adress
    p=p+1;
    cout<<"Inside"<<p<<endl;

    //incrementing VALUE
    //*p=*p+1;
}

int getSum(/*int arr[] is same as--> */int* arr,int n){
    int sum=0;

    cout<<"Size: "<<sizeof(arr)<<endl;

    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main()
{
    // int value =5;
    // int* ptr = &value;

    // cout<<"Before"<<ptr<<endl;
    // update(ptr);
    // cout<<"After"<<ptr<<endl;
    
//    cout<<"Value"<<*ptr<<endl;

int arr[5]={0,1,2,3,4};
cout<<getSum(arr+2,3)<<endl;


    return 0;
}