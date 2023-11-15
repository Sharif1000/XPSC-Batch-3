#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n, k;
	    cin>>n>>k;
	    if((n * 2 <= k)) cout<<(n*5)<<endl;
	    else{
	        cout<<(k*2) + n<<endl;
	    }
	}
	return 0;
}
