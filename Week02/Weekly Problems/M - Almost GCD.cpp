#include<bits/stdc++.h>
using namespace std; 

int main()
{
  int n; cin>>n;
  int a[n];
  for(int i = 0; i < n; i++) cin>>a[i];
  sort(a, a+n);
  int max_element = a[n-1];
  int number;
  int mx = INT_MIN;
  for(int i = 2; i <=max_element; i++){
    int cnt = 0;
    for(int c:a){
      if(c % i == 0){
        cnt++;
      }
    }
    if(cnt > mx){
      mx = cnt;
      number = i;
    }
  }
  cout<<number;
  return 0;
    
}
