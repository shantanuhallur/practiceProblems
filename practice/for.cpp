#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4};
    int sum=0;
    for(int itr:arr){
        sum+=itr;
    }
    cout<<sum;
    return 0;
}