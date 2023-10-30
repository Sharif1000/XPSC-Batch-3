#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n; cin>>n;
    vector<int>v(n);
    for(int i = 0; i < n; i++) cin>>v[i];
    int q; cin>>q;
    while(q--){
      int x; cin>>x;
      auto leftit = lower_bound(v.begin(), v.end(), x);
      int leftidx = leftit - v.begin() - 1;
      
      auto rightit = upper_bound(v.begin(), v.end(), x);
      int rightidx = rightit - v.begin();
      if(leftidx < 0) cout<<"X"<<" ";
      else cout<<v[leftidx]<<" ";
      if(rightidx == n) cout<<"X"<<endl;
      else cout<<v[rightidx]<<endl;
    }
    
    return 0;
}
