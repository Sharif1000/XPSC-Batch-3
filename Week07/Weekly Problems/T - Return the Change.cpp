#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int rem = n  % 10;
	    if(rem >= 5){
	        cout<<(100 - (((n / 10)*10) + 10))<< endl;
	    }
	    else{
	        cout<<(100 - ((n / 10)* 10))<< endl;
	    }
	}
	return 0;
}
