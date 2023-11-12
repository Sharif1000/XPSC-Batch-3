#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--)
	{
	    int x;
	    cin>>x;
	    (x*4 <=1000) ? cout<<"YES":cout<<"NO";
	    cout<<endl;
	}
	return 0;
}
