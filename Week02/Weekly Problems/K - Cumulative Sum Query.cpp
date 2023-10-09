#include <iostream>
using namespace std;

int main() 
{
    int n; cin>>n;
    int a[n];
    int pre[n];
    for(int i = 0; i < n; i++) cin>>a[i];
    pre[0] = a[0];
    for(int i = 1; i < n; i++) pre[i] = a[i] + pre[i-1];
    int q; cin>>q;
    int l,r;
    while(q--){
      cin>>l>>r;
      if(l == 0) cout<<pre[r]<<endl;
      else cout<<pre[r] - pre[l-1]<<endl;
    }
    return 0;
}
