#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
  int n; cin>>n;
  string ans = "aa";
  for(int i = 2; i < n; i++){
    if(ans[i-2] == 'a') ans += 'b';
    else ans += 'a';
  }
  if(n == 1) cout<<'a';
  else cout<<ans;
  return 0;
}
