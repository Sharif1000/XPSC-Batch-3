#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--){
      int sum; cin>>sum;
      vector<int>v;
      for(int i = 9; i > 0; i--){
        if(i <= sum){
          v.push_back(i);
          sum -=i;
        }
      }
      reverse(v.begin(), v.end());
      for(int i:v) cout<<i;
      cout<<endl;
    }
    return 0;
}
