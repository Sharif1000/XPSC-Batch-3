#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    stringstream s;
    char v;
    s << n;
    queue<char> q;
    while(s>>v){
      q.push(v);
    }
    int sz= q.size();
    for(int i = 0; i < 4 - sz; i++){
      cout<<0;
    }
    while(!q.empty()){
      cout<<q.front();
      q.pop();
    }
    return 0;  
}
