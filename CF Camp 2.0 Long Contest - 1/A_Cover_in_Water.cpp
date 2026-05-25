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
        string ss;
        cin>>ss;
        int mx = -1;
        int cnt  = 0;
        int res=0;
        for(int i=0;i<n;i++){
            if(ss[i] == '.'){
                cnt++;
                res++;
            }
            else{
                mx = max(mx,cnt);
                cnt=0;
            }
        }
        mx = max(cnt,mx);
        if(mx >= 3) cout<<2<<endl;
        else{
            cout<<res<<endl;
        }
    }
}