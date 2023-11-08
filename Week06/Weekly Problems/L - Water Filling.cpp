#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int a[3];
	    int cnt = 0;
	    for(int i = 0; i< 3; i++){
	        int x; cin>>x;
	        cnt +=x; 
	    }
	    if(cnt >= 2) cout<<"Not now"<<endl;
	    else cout<<"Water filling time"<<endl;
	}
	return 0;
}
