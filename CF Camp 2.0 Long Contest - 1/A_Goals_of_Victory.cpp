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
       vector<int>v(n);
       for(int i=0;i<n-1;i++){
         cin>>v[i];
       }
       int p = 0;
       int ne = 0;
       for(int i=0;i<n-1;i++){
          if(v[i] >= 0) p+=v[i];
          else ne += v[i];
       }
       cout<<-(p+ne)<<endl;
    }
}