#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() 
{
  int t; cin>>t;
  while(t--){
    int n; cin>>n;
    int a[n], ans[n];
    for(int i = 0; i < n; i++) cin>>a[i];
    int sum = a[0];
    ans[0] = sum;
    bool flag = true;
    for(int i = 1; i < n; i++){
      if(a[i] == 0){
        ans[i] = sum;
      }
      else if(a[i] > sum){
        sum += a[i];
        ans[i] = sum;
      }
      else{
        flag = false;
        break;
      }
    }
    if(flag){
      for(int val: ans) cout<<val<<" ";
      cout<<endl;
    }
    else cout<<-1<<endl;
  }
  return 0;
}
