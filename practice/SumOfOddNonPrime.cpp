#include<bits/stdc++.h>
using namespace std;
void SumOfOdd(int n){
    int arr[100]={0};
    for (int i = 2; i < n; i++)
    {
        if (arr[i]==0)
        {
            for (int j = i*i; j < n; j+=i)
            {
                arr[j]=1;
            }
            
        }
        
    }
    int sum=0;
    for (int i = 2; i < n; i++)
    { if(arr[i]==1 && i%2!=0)
        {
            sum+=i;
       }
    }
    cout<<sum;
}

int main(){
    int n;
    cin>>n;
    SumOfOdd(n);
}





                                                                                                        