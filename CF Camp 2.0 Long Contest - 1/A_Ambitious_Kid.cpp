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
    int n;
    cin>>n;
    vector<int>v(n);
    cinv(v);
    int mn = INT_MAX;
    for(int i=0; i<n; i++)
    {
        mn = min(mn,abs(v[i]));
    }
    cout<<mn<<endl;
}