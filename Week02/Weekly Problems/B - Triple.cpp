#include <bits/stdc++.h>
using namespace std;
class digit
{
    public:
    int number;
    int count;
    digit(int number, int count)
    {
        this->number = number;
        this->count = count;
    }
};
class cmp
{
    public:
    bool operator()(digit a, digit b)
    {
        if (a.count < b.count)
            return true;
        else if (a.count > b.count)
            return false;
        else
        {
            if (a.number < b.number)
                return true;
            else
                return false;
        }
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<int, int> mp;
        for (int i = 0; i < n; i++){
            int x;
            cin>>x;
            mp[x]++;
        }
        priority_queue<digit, vector<digit>, cmp> pq;
        
        for (auto it = mp.begin(); it != mp.end(); it++){
            digit obj(it->first, it->second);
            pq.push(obj);
        }
        
        if(pq.top().count >= 3) cout<<pq.top().number<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}
