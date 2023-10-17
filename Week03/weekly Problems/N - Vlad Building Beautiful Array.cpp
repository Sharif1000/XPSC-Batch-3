#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--){
      int n; cin>>n;
      int a[n];
      for(int i = 0; i < n; i++) cin>>a[i];
      sort(a, a+n);
      
      if(a[0] % 2 == 1){
        cout<<"YES"<<endl;
      }
      else{
        bool flag = true;
        for(int i = 0; i < n; i++){
          if(a[i] % 2 != 0){
            flag = false;
            break;
          }
        }
        (flag) ? cout<<"YES":cout<<"NO";
        cout<<endl;
      }
    }
    return 0;
}
