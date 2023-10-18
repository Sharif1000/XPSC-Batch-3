#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--){
      int n; cin>>n;
      int a[n];
      for(int i = 0; i < n; i++) cin>>a[i];
      long long int power = 0;
      priority_queue<int>pq;
      for(int i = 0; i < n; i++){
        if(a[i] > 0){
          pq.push(a[i]);
        }
        else{
          if(!pq.empty()){
            int poweradd = pq.top();
            power +=poweradd;
            pq.pop();
          }
        }
      }
      cout<<power<<endl;
    }
    return 0;
}
