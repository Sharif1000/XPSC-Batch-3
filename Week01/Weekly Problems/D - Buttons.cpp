#include <iostream>
using namespace std;

int main() 
{
    int a,b; cin>>a>>b;
    int diff = abs(a - b);
    int sum;
    if(diff <= 1){
      sum = a + b;
    }
    else{
      int mx = max(a,b);
      sum = mx + mx - 1;
    }
    cout<<sum;
    return 0;
}
