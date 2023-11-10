#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
  int t; cin>>t;
  while(t--){
    string a,b;
    cin>>a>>b;
    int sz = b.size();
    if(sz == 1){
      if(b[0] == 'a') cout<<1<<endl;
      else cout<<(1ll<<(a.size()))<<endl;
    }
    else{
      if(count(b.begin(), b.end(), 'a') > 0) cout<<-1<<endl;
      else cout<<(1ll<<(a.size()))<<endl;
    }
  }
  return 0;
}
