#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, x;
    cin>>n>>x;
    vector<int> v;
    int y;
    for(int i = 0; i < n; i++){
      cin>>y;
      if(y == x) continue;
      else v.push_back(y);
    }
    for(int val:v){
      cout<<val<<" ";
    }
    return 0;
}
