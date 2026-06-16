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
    int t=1;
    //cin >> t;
    while (t--)
    {
       int n;
       cin>>n;
       int m = 0;
       int c = 0;
       for(int i=0;i<n;i++){
         int a,b;
         cin>>a>>b;
         if(a>b) m++;
         else if(b>a) c++;
       }
       if(m>c) cout<<"Mishka"<<endl;
       else if(c>m) cout<<"Chris"<<endl;
       else cout<<"Friendship is magic!^^"<<endl;
    }
    return 0;
}