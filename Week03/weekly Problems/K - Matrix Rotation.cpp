#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--){
      int mn = INT_MAX;
      int mx = INT_MIN;
      int ar[4];
      int minpos, maxpos;
      for(int i = 0; i < 4; i++){
        cin>>ar[i];
        if(ar[i] < mn){
          mn = ar[i];
          minpos = i;
        }
        if(ar[i]> mx){
          mx = ar[i];
          maxpos = i;
        }
      }
      if(minpos + maxpos == 3) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
    return 0;
}
