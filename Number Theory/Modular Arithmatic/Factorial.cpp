#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;

long long factorial (int N){
  long long ans = 1;
  for(int i = 1; i <=N; i++){
    ans = (ans * i) % mod;
  }
  return ans;
}

int main() 
{
    cout<<factorial(25);
    return 0;
}
