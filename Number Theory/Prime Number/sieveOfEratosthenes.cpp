#include <bits/stdc++.h>
using namespace std;

void sieveOfEratosthenes(int n) {
    
    vector<bool> prime(n+1, true);

    for (int p = 2; p * p <= n; p++) {
        // If prime[p] is true, then it is a prime
        if (prime[p]) {
            // Set all multiples of p to false
            for (int i = p * p; i <= n; i += p) {
                prime[i] = false;
            }
        }
    }
    // Print and count all prime numbers
    int cnt = 0;
    for (int p = 2; p <= n; ++p) {
        if (prime[p]) {
          cnt++;
          cout << p << " ";
        }
    }
    cout<<endl;
    cout<<cnt;
}

int main() {
    int t; cin>>t;
    while(t--){
      int n; cin>>n;
      sieveOfEratosthenes(n);
      cout<<endl;
    }
    return 0;
}
