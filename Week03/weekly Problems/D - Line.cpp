#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
      int n; cin>>n;
      string s; cin>>s;
      long long int ans = 0;
      for(int i = 0; i < n; i++){
        if(s[i] == 'L') ans +=i;
        else ans +=(n - 1 - i);
      }
      vector<int>v;
      for(int i = 0; i < n; i++){
        if(s[i] == 'L') v.push_back(n - 1 - i - i);
        else v.push_back(i - (n - 1 - i));
      }
      sort(v.begin(), v.end(), greater<int>());
      for(int i = 0; i < n; i++){
        if(v[i] > 0){
          ans +=v[i];
          cout<<ans<<" ";
        }
        else cout<<ans<<" ";
      }
      cout<<endl;
    }
    return 0;
}
