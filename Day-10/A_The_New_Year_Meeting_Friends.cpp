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
    int a,b,c;
    cin>>a>>b>>c;
    int mn = min(a,min(b,c));
    int mx = max(a,max(b,c));
    cout<<mx-mn<<endl;
}