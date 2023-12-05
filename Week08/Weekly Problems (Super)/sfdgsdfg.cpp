#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
  int t; cin>>t;
  while(t--){
    string s; cin>>s;
    vector<char,int>up;
    vector<char,int>lo;
    for(int i= 0; i <s.length(); i++){
      if(s[i] != 'b' && s[i] >= 'a' && s[i] <= 'z') lo.push_back({s[i],i});
      else if(s[i] != 'B' && s[i] >= 'A' && s[i] <= 'Z') up.push_back({s[i],i});
      else if(s[i] == 'b'){
        if(!lo.empty()) lo.pop_back();
      }
      else if(s[i] == 'B'){
        if(!up.empty()) up.pop_back();
      }
    }
    vector<char,int>final;
    for(auto it:up){
      
    }
  }
  return 0;
}
