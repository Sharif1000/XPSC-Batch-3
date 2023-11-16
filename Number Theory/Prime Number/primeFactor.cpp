#include <bits/stdc++.h>
using namespace std;

void primeFact(int n) {
    map<int,int>mp;
    for (int p = 2; p * p <= n; p++) {
        while(n % p == 0){
          mp[p]++;
          n /=p;
        }
    }
    if(n > 1) mp[n]++;
    for(auto [x,y]:mp){
        cout<<x<<"^"<<y<<" ";
    }
}

int main() {
    int t; cin>>t;
    while(t--){
      int n; cin>>n;
      primeFact(n);
      cout<<endl;
    }
    return 0;
}
