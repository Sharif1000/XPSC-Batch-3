#include<bits/stdc++.h>
using namespace std;

int main(){
  int t; cin>>t;
  while(t--){
    int n,k; cin>>n>>k;
    int ans = 0;
    if(k == 1) cout<<n<<endl;
    else{
      while(n > 0){
      ans += n % k;
      n /= k;
    }
    cout<<ans<<endl;
  }
    
}
  return 0;
}
