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
        int n,x;
        cin>>n>>x;
        vector<int>v;
        v.push_back(0);
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        v.push_back(x);
        int mx = INT_MIN;
        for(int i=1;i<v.size();i++){
            if(i == v.size()-1){
                mx = max(mx,2*(v[i]-v[i-1]));
                continue;
            }
            mx = max(mx,(v[i]-v[i-1]));
        }
        cout<<mx<<endl;
    }
}