#include <bits/stdc++.h>
using namespace std;

void NumOfrimeFact(int n) {
    int cnt = 0;
    for (int p = 2; p * p <= n; p++) {
      if(n % p == 0){
        while(n % p == 0){
          n /=p;
        }
        cnt++;
      }
    }
    if(n > 1) cnt++;
    cout<<cnt;
}

int main() {
    int t; cin>>t;
    while(t--){
      int n; cin>>n;
      NumOfrimeFact(n);
      cout<<endl;
    }
    return 0;
}
