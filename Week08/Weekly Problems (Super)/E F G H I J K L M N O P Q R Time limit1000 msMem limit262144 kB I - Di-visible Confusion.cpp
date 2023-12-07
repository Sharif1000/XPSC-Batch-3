#include<bits/stdc++.h>
using  namespace  std;
#define ll long long

int main()
{
  int t; cin>>t;
  while(t--){
    int n; cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];
    
    bool flag = false;
    
    for(int i=1;i<=n;i++){
       bool element =  false;
      for(int j=2;j<=i+1;j++){
        if(a[i]%j!=0){
           element = true;
          break;
        }
      }
      if(element== false){
        flag = true;
        break;
      }
    }
    (flag) ? cout<<"NO"<<endl:cout<<"YES"<<endl;
  }
  return 0;
}
