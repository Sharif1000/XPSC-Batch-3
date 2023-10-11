#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t; cin>>t;
	while(t--){
	  int n;
	  cin>>n;
	  string s;
	  cin>>s;
	  int i = 0, r = 0, b = 0, w = 0;
	  bool flag = false;
	  
	  while(i < n){
	     r +=(s[i] == 'R');
	     b +=(s[i] == 'B');
	     w +=(s[i] == 'W');
	     if(w){
	       if((r == 0 && b == 0) || (r >= 1 && b >=1)) flag = true;
	       else break;
	       if(i < n - 1) flag = false;
	       w = 0, r = 0, b = 0;
	     }
	     i++;
	  }
	  if((r == 0 && b == 0) || (r >= 1 && b >=1)) flag = true;
	  (flag) ? cout<<"YES"<<endl:cout<<"NO"<<endl;
	   }
	return 0;
}
