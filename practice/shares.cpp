#include<bits/stdc++.h>
using namespace std;


//1. Write a program to find that one transaction to gain the maximum profit in the 7 days of the stock market.
//- {70, 95, 40, 60, 25, 35, 55}


int main()
{   int arr[] = {70, 100, 40, 60, 25, 35, 55};
    vector<int> v(7,0); 
    int n =7;
    int currmax= INT_MIN;
    v[n-1]=arr[n-1];

    for(int i= n-1; i>=0; i--){
        if(arr[i]>currmax){
            currmax = arr[i];
        }
        v[i] = max(arr[i],currmax);
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    int maxdiff=0;
    int buy,sell;
    for(int i=0;i<n;i++){
        int temp = v[i]-arr[i];
        //maxdiff = max(maxdiff,temp);
        if(maxdiff<temp){
            maxdiff = temp;
            buy=i;
            sell=v[i];
        }

    }
    int ans;
    for(int i=0;i<n;i++){
        if(arr[i]==sell){
            ans = i;
        }
    }

    cout<<"Max profit : "<<maxdiff<<endl;
    cout<<"Buy on : "<<buy+1<<" and sell on : "<<ans+1;


    

    //  {70, 100, 40, 60, 25, 35, 55};
    //v[i] = 100 100 60 60 55 55 55 max
    // maxdiff =  30 0 20 0 30 20 0
    return 0;
}