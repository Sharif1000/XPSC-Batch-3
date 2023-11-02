#include <bits/stdc++.h>
using namespace std;
int N = 90000000;
vector<int>v;

void sieveOfEratosthenes(int n) {
    
    vector<bool> prime(n+1, true);
    for (int p = 2; p * p <= n; p++) {
        if (prime[p]) {
            for (int i = p * p; i <= n; i += p) {
                prime[i] = false;
            }
        }
    }
    for (int p = 2; p <= n; ++p) {
        if (prime[p]) {
          v.push_back(p);
        }
    }
}

int main() {
    int t; cin>>t;
    sieveOfEratosthenes(N);
    while(t--){
      int n; cin>>n;
      cout<<v[n-1]<<endl;
    }
    return 0;
}
