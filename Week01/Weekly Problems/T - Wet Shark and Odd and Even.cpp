#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  int a[n];
  long long int sum = 0;
  for(int i = 0; i < n; i++){
    cin>>a[i];
    sum +=a[i];
  }
  sort(a, a+n);
  int mn;
  for(int i = 0; i < n; i++){
    if(a[i] % 2 == 1){
      mn = a[i];
      break;
    }
  }
  if(sum % 2 == 0){
    cout<<sum;
  }
  else{
    cout<<(sum - mn);
  }
  return 0;
}
