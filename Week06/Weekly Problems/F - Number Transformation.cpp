#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
      long long int a,b;
      cin>>a>>b;
      long long int res = b / a;
      if(b % a == 0) cout<<1<<" "<<(b/a)<<endl;
      else cout<<0<<" "<<0<<endl;
    }
    return 0;
}
