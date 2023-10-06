#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--){
      set<int> s;
      int n; cin>>n;
      for(int i = 0; i < n; i++){
        int x; cin>>x;
        s.insert(x);
      }
      int sz = n - s.size();
      
      if(sz % 2 == 0){
        cout<<s.size()<<endl;
      }
      else{
        cout<<s.size()-1<<endl;
      }
    }
    return 0;
}
