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
        sort(v.begin(),v.end());
        bool flag = true;
        for(int i=1;i<n;i++){
            if(abs(v[i]-v[i-1]) > 1){
                flag  = false;
                break;
            }
        }
        if(flag) yes
        else no
    }
    return 0;
}