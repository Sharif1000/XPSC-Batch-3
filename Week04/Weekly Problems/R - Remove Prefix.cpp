#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--){
      int n; cin>>n;
      int a[n];
      map<int,int>mp;
      for(int i = 0; i < n; i++){
        cin>>a[i];
        mp[a[i]]++;
      }
      int cnt = 0;
      int lst = 0;
      for(int i = 0; i < n; i++){
        if(mp[a[i]] > 1){
          cnt++;
          mp[a[i]]--;
          if(lst > 0){
            cnt +=lst;
            lst = 0;
          } 
        }
        else{
          lst++;
        }
      }
      cout<<cnt<<endl;
    }
    return 0;
}
