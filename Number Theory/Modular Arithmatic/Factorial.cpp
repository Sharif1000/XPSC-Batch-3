#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll mod = 1e9+7;

ll factorial (int N){
  ll ans = 1;
  for(int i = 1; i <=N; i++){
    ans = (ans * i) % mod;
  }
  return ans;
}

int main() 
{
    cout<<factorial(3);
    return 0;
}
