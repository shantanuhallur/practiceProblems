

#include<bits/stdc++.h>
using namespace std;
 

int main()
{
    int i,j;
    i=1;
    j=25;
    int sum=0; 
    int temp=0;
    while (i>=j)
    {
      sum+=i+j+(temp*2);
      i=i+2;
      j=j-2;
      temp++;
      
    }
    sum+=i;
    cout<<sum;
    
}


