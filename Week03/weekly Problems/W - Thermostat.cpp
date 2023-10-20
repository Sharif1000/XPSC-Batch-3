#include <iostream>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--){
      int l,r,x;
      cin>>l>>r>>x;
      int a,b;
      cin>>a>>b;
      if(a == b) cout<<0<<endl;
      else if(abs(a - b) >= x) cout<<1<<endl;
      else if((min(a,b) - l >= x) || r - max(a,b) >= x) cout<<2<<endl;
      else if((a - l >=x && r - b >= x) || (r - a >= x && b - l >= x)) cout<<3<<endl;
      else cout<<-1<<endl;
    }
    return 0;
}
