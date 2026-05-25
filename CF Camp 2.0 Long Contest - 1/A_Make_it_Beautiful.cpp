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
       int cnt  = count(v.begin(),v.end(),v[0]);
       if(cnt  == n) no
       else{
        yes
        sort(v.rbegin(),v.rend());
        int l = 0;
        int r = n-1;
        while(l<=r){
            if(l == r){
                cout<<v[l]<<" ";
                l++;
                continue;
            }
            cout<<v[l]<<" "<<v[r]<<" ";
            l++;
            r--;
        }
        cout<<endl;
       }
    }
}