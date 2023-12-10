#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() 
{
  int t; cin>>t;
  while(t--){
    ll a,b,x,y,d;
    cin>>a>>b>>x>>y>>d;
    if((x - d) > 1 && (y + d) < b) cout<<(a + b - 2)<<endl;
    else if((y - d) > 1 && (x + d) < a) cout<<(a + b - 2) <<endl;
    else cout<<-1<<endl;
   }
  return 0;
}
