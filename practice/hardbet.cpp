#include <iostream>
using namespace std;

int main() {
    int t;
	cin>>t;
	
	while(t--){
	    int sa,sb,sc;
	    cin>>sa>>sb>>sc;
	    if(sa<sb && sa<sc){
	        cout<<"Draw"<<endl;
	    }
	    else if(sb<sa && sb<sc)
	    cout<<"Bob"<<endl;
	    else 
	    cout<<"Ailce"<<endl;
	}
	return 0;
}