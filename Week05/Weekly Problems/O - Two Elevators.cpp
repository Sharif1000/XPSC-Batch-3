#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--){
      int a,b,c;
      cin>>a>>b>>c;
      if(a == 1) cout<<1<<endl;
      else{
        int valb = abs(b - c) + (c - 1);
        int vala = a - 1;
        if(valb < vala) cout<<2<<endl;
        else if(valb > vala) cout<<1<<endl;
        else cout<<3<<endl;
      }
    }
    return 0;
}
