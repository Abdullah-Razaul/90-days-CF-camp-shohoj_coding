#include <bits/stdc++.h>
using namespace std;
const int mod = 676767677;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define coutv(v)      \
    for (auto &i : v) \
        cout << i << " ";
#define cinv(v)       \
    for (auto &i : v) \
        cin >> i;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#include <bits/stdc++.h>
using namespace std;
int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        cinv(v);
        map<int,int>mp;
        for(auto val : v){
            mp[val]++;
        }
        if(mp.size() == 1) cout<<"Yes"<<endl;
        else if(mp.size() == 2){
            vector<int>ve;
            for(auto val : mp){
                ve.push_back(val.second);
            }
            if(abs(ve[0]-ve[1]) <=1) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        else cout<<"No"<<endl;
    }
}