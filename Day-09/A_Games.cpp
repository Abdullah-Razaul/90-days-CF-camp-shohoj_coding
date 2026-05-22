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
    optimize()
    int n;
    cin>>n;
    vector<int>h;
    vector<int>a;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        h.push_back(x);
        a.push_back(y);
    }
    int res  = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i] == h[j]) res++;
        }
    }
    cout<<res<<endl;
}