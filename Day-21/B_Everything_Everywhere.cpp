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
       int cnt  = 0;
       for(int i=1;i<n;i++){
         if(abs(v[i] - v[i-1]) == __gcd(v[i],v[i-1])) cnt++;
       }
       cout<<cnt<<endl;
    }
    return 0;
}