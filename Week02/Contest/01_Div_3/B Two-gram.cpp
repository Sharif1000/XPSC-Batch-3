#include <bits/stdc++.h>
using namespace std;

class substr
{
    public:
    string str;
    int count;
    substr(string str, int count)
    {
        this->str = str;
        this->count = count;
    }
};
class cmp
{
    public:
    bool operator()(substr a, substr b)
    {
        if (a.count < b.count)
            return true;
        else if (a.count > b.count)
            return false;
        else
        {
            if (a.str < b.str)
                return true;
            else
                return false;
        }
    }
};


int main() 
{
    int n; cin>>n;
    string s; cin>>s;
    map<string,int> mp;
    
    for(int i = 0; i < n - 1; i++){
      string val;
      val +=s[i];
      val +=s[i+1];
      mp[val]++;
    }
    priority_queue<substr, vector<substr>, cmp> pq;
      
    for (auto it = mp.begin(); it != mp.end(); it++){
        substr obj(it->first, it->second);
        pq.push(obj);
    }
      
    cout<<pq.top().str;
    
    return 0;
}
