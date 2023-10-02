#include <bits/stdc++.h>
using namespace std;

int main() 
{
    float a,b; cin>>a>>b;
    float discount = ((a - b) / a) * 100.0;
    cout<<discount;
    return 0;
}
