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
const int N = 1000007;
vector<int>v(N);
int main()
{
    for(int i=1;i<=1000000;i++){
        int n = i;
        vector<int>tmp;
        while(n!=0){
            tmp.push_back(n%10);
            n/=10;
        }
        int cnt  = count(tmp.begin(),tmp.end(),0);
        if(tmp.size() - cnt == 1){
            v[i] = v[i-1]+1;
        }
        else v[i] = v[i-1];
    }
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<v[n]<<endl;
    }
}