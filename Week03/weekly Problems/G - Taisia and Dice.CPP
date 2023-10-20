#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--){
      int n, s,r;
      cin>>n>>s>>r;
      
      int a[n] = {0};
      a[0]= s-r;
      
      while(r){
        for(int i = 1; i < n && r > 0; i++){
          a[i] +=1;
          r -=1;
        }
      }
      for(int i =0; i<n; i++){
        cout<<a[i]<<" ";
      }
      cout<<endl;
    }
    return 0;
}
