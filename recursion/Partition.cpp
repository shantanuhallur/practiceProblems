#include<iostream>
using namespace std;

void functest(){
    cout<<"inside func test";

  
}

swap(int arr[],int i,int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}


void partition(int arr[], int length){
     int i=0;
    int j = 0;

    while(i<length){
    if(arr[i]%2!=0){
      i++;
    }
    else{
      swap(arr,i,j);
      i++;
      j++;
    }
    }

    for(int i=0;i<length;i++){
        cout<<arr[i]<<" ";
    }
}


int main()
{
   

 int arr[] = {10,12,13,14,7,8,9,11,18,23,22,18};
    partition(arr,12);

    return 0;
}