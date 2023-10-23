#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--){
      int n; cin>>n;
      if(n == 1 || n == 3){
        cout<<-1<<endl;
      }
      else if(n == 5){
        cout<<3<< " "<<4<<" "<<5<<" "<<2<< " "<<1<<endl;
      }
      else if(n % 2 == 0){
        for(int i = n; i > 0; i--){
          cout<<i<<" ";
        }
        cout<<endl;
      }
      else{
        int mid = n / 2 + 1;
        int midnext = n / 2;
        for(int i = n; i > 0; i--){
          if(i == mid){
            cout<<i-1<<" ";
          }
          else if( i == midnext){
            cout<<i+1<<" ";
          }
          else{
            cout<<i<<" ";
          }
        }
        cout<<endl;
      }
    }
    return 0;
}
