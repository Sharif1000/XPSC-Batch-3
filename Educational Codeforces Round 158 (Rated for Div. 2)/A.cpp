#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--){
      int n, k;
      cin>>n>>k;
      int a[n];
      for(int i = 0; i < n; i++) cin>>a[i];
      
      int val = a[0];
      
      for(int i = 1; i < n; i++){
        val = max(val, abs(a[i] - a[i-1]));
      }
      val = max(val, (2*abs(a[n-1] - k)));
      cout<<val<<endl;
    }
    return 0;
}
