#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define coutv(v) for (auto &i : v) cout << i << " ";
#define cinv(v) for (auto &i : v) cin >> i;
bool chk(int n ){
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n ;
        cin>>n;
        vector<int>v(n);
        cinv(v);
        for(int i=0;i<n;i++){
            int cnt1  = 0;
            int cnt2 = 0;
            for(int j = i+1 ;j<n ;j++){
                if(v[i] > v[j]) cnt1 ++;
                else if(v[i] < v[j]) cnt2++;
            }
            cout<<max(cnt1,cnt2)<<" ";
        }
        cout<<endl;
    }
    return 0;
}