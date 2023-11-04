#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
      long long int a,b,c,x,y;
      cin>>a>>b>>c>>x>>y;
      long long res = 0;
      if(x > a) res += (x - a);
      if(y > b) res += (y - b);
      if(res <= c) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
    return 0;
}
