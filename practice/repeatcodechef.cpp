
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k,s;
        cin>>n>>k>>s;
        int sum=0;
       sum = n*n;
      
      int diff = s-sum;
       int ans = diff/(k-1);
      cout<<ans;
       
    }
	
}
