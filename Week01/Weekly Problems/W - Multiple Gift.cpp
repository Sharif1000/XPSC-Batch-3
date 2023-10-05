#include <iostream>
using namespace std;

int main() 
{
    long long int x,y;
    cin>>x>>y;
    int cnt = 1;
    while(x < y){
      x = x * 2;
      if(x <=y){
        cnt++;
      }
    }
    cout<<cnt;
    return 0;
}
