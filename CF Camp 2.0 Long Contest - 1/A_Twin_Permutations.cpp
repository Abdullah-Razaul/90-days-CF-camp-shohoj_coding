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
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        cinv(v);
        map<int,int>mp;
        for(int i = 1,l=n;i<=n;i++,l--){
            mp[i] = l;
        }
        for(auto val : v){
            cout<<mp[val]<<" ";
        }
        cout<<endl;
    }
    return 0;
}