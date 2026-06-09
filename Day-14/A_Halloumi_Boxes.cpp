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
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        cinv(v);
        if(k>=2) yes
        else{
            bool flag  = true;
            for(int i=0;i<n-1;i++){
                if(v[i]>v[i+1]){
                    flag  = false;
                    break;
                }
            }
            if(flag) yes
            else no
        }
    }
}