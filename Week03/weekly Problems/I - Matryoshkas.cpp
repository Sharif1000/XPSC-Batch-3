#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--){
      int n;cin>>n;
      int a[n];
      map<int,int>mp;
      set<int>st;
      for(int i = 0; i < n; i++){
        cin>>a[i];
        mp[a[i]]++;
        st.insert(a[i]);
        st.insert(a[i]+1);
      }
      int cnt = 0;
      int last = 0;
      for(auto x:st){
        int c = mp[x];
        cnt +=max(0, c - last);
        last = c;
      }
      cout<<cnt<<endl;
    }
    return 0;
}
