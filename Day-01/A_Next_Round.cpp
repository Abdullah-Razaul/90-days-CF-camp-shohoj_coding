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
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    cinv(v);
    k--;
    int a = v[k];
    int cnt  = 0;
    for(int i=0;i<n;i++) if(v[i]>=a && v[i]!=0) cnt++;
    cout<<cnt<<endl;
    return 0;
}