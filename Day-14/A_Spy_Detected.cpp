#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define coutv(v)      \
    for (auto &i : v) \
        cout << i << " ";
#define cinv(v)       \
    for (auto &i : v) \
        cin >> i;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        cinv(v);
        map<int , int>mp;
        for(auto val : v){
            mp[val]++;
        }
        for(int i=0;i<n;i++){
            if(mp[v[i]] == 1){
                cout<<i+1<<endl;
                break;
            }
        }
    }
    return 0;
}