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
    int t=1;
    //cin>>t;
    while(t--){
       int n;
       cin>>n;
       vector<int>v(n);
       cinv(v);
       int mx = *max_element(v.begin(),v.end());
       int res  = 0;
       for(auto val : v){
          res += mx-val;
       }
       cout<<res<<endl;
    }
}