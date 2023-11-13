#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int r, o;
	    cin>>r>>o;
	    if(r <= (o * 36)) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}
