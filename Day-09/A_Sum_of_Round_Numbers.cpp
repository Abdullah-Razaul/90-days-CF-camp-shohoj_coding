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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        int d = 1;
        while(n!=0){
            v.push_back(n%10);
            n/=10;
            d*=10;
        }
        d/=10;
        int cnt  = count(v.begin(),v.end(),0);
        cout<<v.size()-cnt<<endl;
        for(int i=v.size()-1;i>=0;i--){
            if(v[i] != 0){
                cout<<v[i]*d<<" ";
            }
            d/=10;
        }
        cout<<endl;
    }
}