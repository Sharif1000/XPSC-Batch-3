#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--){
      int n; cin>>n;
      map<string,bool>mp;
      vector<string>v(n);
      for(int i = 0; i < n; i++){
        cin>>v[i];
        mp[v[i]] = true;
      }
      for(int i = 0; i < n; i++){
        bool flag = false;
        for(int j = 1; j < v[i].length(); j++){
          string left = v[i].substr(0,j);
          string right = v[i].substr(j,v[i].length()-j);
          if(mp[left] && mp[right]) flag = true;
        }
        cout<<flag;
      }
      cout<<endl;
    }
    return 0;
}
