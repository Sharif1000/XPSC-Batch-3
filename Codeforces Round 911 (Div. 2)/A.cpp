#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
  int t; cin>>t;
  while(t--){
    int n; cin>>n;
    string s; cin>>s;
    int mx = INT_MIN;
    int con = 0;
    int cnt = 0;
    for(int i = 0; i < n; i++){
      if(s[i] == '.'){
        cnt++;
        con++;
      }
      else{
        mx= max(con, mx);
        con = 0;
      }
    }
    mx = max(con, mx);
    
    if(mx > 2) cout<<2<<endl;
    else cout<<cnt<<endl;
    
  }
  return 0;
}
