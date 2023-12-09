#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  int t; cin>>t;
  while(t--){
    int n; cin>>n;
    string s; cin>>s;
    int ans=INT_MAX;
    for(int i=0; i<26; i++){
      int c = 0;
      bool flag = false;
      int l = 0;
      int r = n - 1;
      
      while(l < r){
        if(s[l] != s[r]){
          if(s[l] == char(i+97)){
            l++;
            c++;
          }
          else if(s[r] == char(i+97)){
            r--;
            c++;
          }
          else{
            flag = true;
            break;
          }
        }
        else{
          l++;
          r--;
        }
      }
      if(flag == false) ans = min(ans, c);
    }
    (ans==INT_MAX) ? cout<<-1<<endl:cout<<ans<<endl;
  }
  return 0;
}
