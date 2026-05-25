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
        vector<int>v1 = v;
        sort(v1.begin(),v1.end());
        if(v1 != v){
            cout<<0<<endl;
        }
        else{
            int mn  =INT_MAX;
            for(int i=0;i<n-1;i++){
                mn = min(mn,v[i+1]-v[i]);
            }
            cout<<mn/2 + 1<<endl;
        }
    }
    return 0;
}