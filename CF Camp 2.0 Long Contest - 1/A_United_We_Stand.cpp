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
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        cinv(v);
        sort(v.begin(),v.end());
        int cnt  = count(v.begin(),v.end(),v[0]);
        if(cnt == n){
            cout<<-1<<endl;
            continue;
        }
        vector<int>b,c;
        b.push_back(v[0]);
        for(int i=1;i<n;i++){
            if(v[i] == v[0]) b.push_back(v[i]);
            else c.push_back(v[i]);
        }
        cout<<b.size()<<" "<<c.size()<<endl;
        for(auto val : b) cout<<val<<" ";
        cout<<endl;
        for(auto val : c) cout<<val<<" ";
        cout<<endl;
    }
    return 0;
}