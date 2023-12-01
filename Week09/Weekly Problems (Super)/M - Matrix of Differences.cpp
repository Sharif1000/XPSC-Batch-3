#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
  int t; cin>>t;
  while(t--){
    int n; cin>>n;
    int ans[n+1][n+1];
    int m = n * n;
    int small = 1, large = m;
    int c = 1;
    
    for(int i=1; i<=n; i++){
      if(i % 2 != 0){
        for(int j = 1; j <= n; j++){
          if(c % 2 != 0){
              ans[i][j] = small;
              small++;
          }
          else{
              ans[i][j]=large;
              large--;
          }
          c++;
        }
      }
      else{
        for(int j = n; j >= 1; j--){
          if(c%2 == 1){
            ans[i][j] = small;
            small++;
          }
          else{
            ans[i][j] = large;
            large--;
          }
          c++;
        }
      }
    }
    
    for(int i = 1; i <= n; i++){
      for(int j = 1; j <= n; j++){
          cout<<ans[i][j]<<" ";
      }
      cout<<endl;
    }
  }
  return 0;
}
