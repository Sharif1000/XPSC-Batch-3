#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++) cin>>a[i];
    bool flag = true;
    for(int i = 2; i < n; i++){
        if(a[i] % 2 != a[i-2] % 2 ){
          flag = false;
          break;
        }
    }
    (flag) ? cout<<"YES"<<endl:cout<<"NO"<<endl;
  }
  return 0;
}
