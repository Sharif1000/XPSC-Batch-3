#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--){
      int n; cin>>n;
      long long int a[n];
      int q; cin>>q;
      long long int sum = 0;
      int cnt0 = 0;
      int cnt1 = 0;
      for(int i = 0; i < n; i++){
        cin>>a[i];
        sum +=a[i];
        if(a[i] % 2 == 0) cnt0++;
        else cnt1++;
      }
      
      while(q--){
        int type, add;
        cin>>type>>add;
        if(type ==0){
          sum += add * cnt0;
          if(add % 2 != 0){
            cnt1 = n;
            cnt0 = 0;
          }
        }
        else{
          sum += add * cnt1;
          if(add % 2 != 0){
            cnt0 = n;
            cnt1 = 0;
          }
        }
        cout<<sum<<endl;
      }
    }
    return 0;
}
