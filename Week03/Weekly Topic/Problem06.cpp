#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t; cin>>t;
  while(t--){
    int ans = 0;
    int n; cin>>n;
    int x;
    for(int i = 0; i < n; i++){
      cin>>x;
      ans ^=x;
    }
    if(ans == 0){
      cout<<0<<endl;
    }
    else if(n % 2 == 1){
      cout<<ans<<endl;
    }
    else{
      cout<<-1<<endl;
    }
  }
  return 0;
}
