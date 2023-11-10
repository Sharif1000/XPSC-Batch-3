#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int t; cin>>t;
  while(t--){
    int n,k; cin>>n>>k;
    string s; cin>>s;
    int w = 0;
    int j = 0;
    int ans = INT_MAX;
    
    for(int i = 0; i < n; i++){
      if(s[i] == 'W') w++;
      if(i >= k - 1){
        ans = min(ans,w);
        if(s[j] == 'W') w--;
        j++;
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}
