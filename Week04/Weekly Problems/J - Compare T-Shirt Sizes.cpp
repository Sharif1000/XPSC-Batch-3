#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--){
      string a,b;
      cin>>a>>b;
      char as, bs;
      as = a.back();
      bs = b.back();
      if(as == bs){
        if(a.size() == b.size()) cout<<"="<<endl;
        else if(as == 'L') (a < b) ? cout<<"<"<<endl:cout<<">"<<endl;
        else (a < b) ? cout<<">"<<endl:cout<<"<"<<endl;
      }
      else (as < bs) ? cout<<">"<<endl:cout<<"<"<<endl;
    }
    return 0;
}
