#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int arr[n];
      for(int i = 0; i < n; i++){
        cin>>arr[i];
      }
      int cnt = 0;
      long long int sum = 0;
      
      for(int i = 0; i < n; i++){
        if(arr[i] >=0){
          continue;
        } 
        int j = i;
        while(j < n && arr[j] <= 0){
          j++;
        }
        cnt++;
        i = j -1; 
      }
      for(int i = 0; i < n; i++){
        sum += abs(arr[i]);
      }
      cout<<sum<<" "<<cnt<<endl;
    }
    return 0;
}
