#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int a = 0;
	    int b = 0;
	    char server = 'A';
	    for(int i = 0; i < n; i++){
	        if(s[i] == 'A' && server == 'A')  a++;
	        else if(s[i] == 'B' && server == 'A') server = 'B';
	        else if(s[i] == 'B' && server == 'B') b++;
	        else if(s[i] == 'A' && server == 'B') server = 'A';
	    }
	    cout<<a<<" "<<b<<endl;
	}
	return 0;
}
