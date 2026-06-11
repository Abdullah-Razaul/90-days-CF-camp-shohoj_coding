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
       int n;
       cin>>n;
       vector<int>v(n);
       cinv(v);
       int o = 0;
       for(auto val : v){
          if(val&1) o++;
       }
       if(o&1) no
       else yes
    }
    return 0;
}