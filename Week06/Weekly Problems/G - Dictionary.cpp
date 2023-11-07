#include<bits/stdc++.h>
using namespace std;

map<string,int>idx;

void dictionary(){
  int num=0;
  for(char c='a';c<='z';c++){
    for(char cc='a';cc<='z';cc++){
        if(c==cc)continue;
        string s;
        s +=c;
        s +=cc;
        num++;
        idx[s]= num;
    }
  }
  
  for(char c='a';c<='z';c++){
    string s;
    s +=c;
    s +=c;
    num++;
    idx[s]= num;
  }
}

int main(){
  dictionary();
  int t; cin>>t;
  while(t--){
    string str; cin>>str;
    cout<<idx[str]<<endl;
  }
  return 0;
}

