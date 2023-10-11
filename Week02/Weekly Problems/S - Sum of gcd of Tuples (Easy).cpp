#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int k; cin>>k;
  long long int sum = 0;
  for(int i = 1; i <= k; i++){
    for(int j = 1; j <= k; j++){
      for(int l = 1; l <= k; l++){
        int val = __gcd(i, __gcd(j,l));
        sum +=val;
      }
    }
  }
  cout<<sum;
  return 0;
}
