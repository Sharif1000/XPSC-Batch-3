#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--){
      int n; cin>>n;
      int k; cin>>k;
      pair<int,int>a[n];
      int b[n];
      int c[n];
      for(int i = 0; i < n; i++){
        cin>>a[i].first;
        a[i].second = i;
      }
      sort(a,a+n);
      for(int i = 0; i < n; i++) cin>>b[i];
      sort(b, b+n);
      for(int i = 0; i < n; i++){
        int x = a[i].second;
        c[x] = b[i];
      }
      for(int i = 0; i < n; i++){
        cout<<c[i]<< " ";
      }
      cout<<endl;
    }
    return 0;
}
