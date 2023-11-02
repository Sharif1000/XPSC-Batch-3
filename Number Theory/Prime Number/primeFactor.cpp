#include <bits/stdc++.h>
using namespace std;

void primeFact(int n) {
    for (int p = 2; p * p <= n; p++) {
      if(n % p == 0){
        int cnt = 0;
        while(n % p == 0){
          cnt++;
          n /=p;
        }
        cout<<p<<"^"<<cnt<<" ";
      }
    }
    if(n > 1) cout<<n<<"^"<<1;
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
