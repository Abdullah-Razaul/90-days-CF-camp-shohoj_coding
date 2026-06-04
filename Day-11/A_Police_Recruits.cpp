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
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    cinv(v);
    int p = 0;
    int res  = 0;
    for(int i=0;i<n;i++){
        if(v[i] == -1){
            if(p == 0) res++;
            else p--;
        }
        else p += v[i];
    }
    cout<<res<<endl;
    return 0;
}