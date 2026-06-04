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
    int n;
    cin>>n;
    vector<int>v(n);
    cinv(v);
    int mx = v[0];
    int mn = v[0];
    int cnt  = 0;
    for(int i=1;i<n;i++){
        if(v[i] > mx){
            cnt ++;
            mx = v[i];
        }
        else if(v[i]<mn){
            cnt++;
            mn = v[i];
        }
    }
    cout<<cnt<<endl;
}