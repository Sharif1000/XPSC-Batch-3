#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
      int n; cin>>n;
      vector<int>v(n);
      for(int i = 0; i < n; i++) cin>>v[i];
      map<int, int>cnt;
      for(int i = 0; i < n; i++){
        int cur = v[i];
        for(int j = 2; j*j<=cur; j++){
          while(cur % j ==0){
            cnt[j]++;
            cur /=j;
          }
        }
        if(cur > 1) cnt[cur]++;
      }
      bool flag = true;
      for(auto [x,y]:cnt){
        if(y % n != 0){
          flag = false;
          break;
        }
      }
      (flag) ? cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
    return 0;
}
