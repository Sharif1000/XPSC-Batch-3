#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;

int factorial (int N){
  int ans = 1;
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
