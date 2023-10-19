#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--){
      int n; cin>>n;
      int s; cin>>s;
      int a[n];
      int tot = 0;
      int mx = INT_MIN;
      for(int i = 0; i < n; i++){
        cin>>a[i];
        mx = max(mx,a[i]);
        tot +=a[i];
      }
      tot +=s;
      int sum = 0;
      int cnt = 0;
      for(int i = 1; sum <tot; i++){
        sum +=i;
        cnt++;
      }
      if(sum != tot || mx > cnt){
        cout<<"NO"<<endl;
      }
      else{
        cout<<"YES"<<endl;
      }
    }
    return 0;
}
