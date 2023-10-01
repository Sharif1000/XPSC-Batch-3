#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a,b,c; cin>>a>>b>>c;
    int l = (a * a) + (b * b);
    int r = (c * c);
    if(l < r){
      cout<<"Yes";
    }
    else{
      cout<<"No";
    }
    return 0;
}
