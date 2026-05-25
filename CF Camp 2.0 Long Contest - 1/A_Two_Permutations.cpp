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
    int t;
    cin >> t;
    while (t--)
    {
       int n,a,b;
       cin>>n>>a>>b;
       if(a+b >= n){
          if(a == n && b==n) cout<<"Yes"<<endl;
          else cout<<"No"<<endl;
       }
       else{
         if(n-(a+b) == 1) cout<<"No"<<endl;
         else cout<<"Yes"<<endl;
       }
    }
    return 0;
}