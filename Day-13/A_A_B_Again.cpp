#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define coutv(v) for (auto &i : v) cout << i << " ";
#define cinv(v) for (auto &i : v) cin >> i;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int res  = 0;
        while(n!=0){
            res += n%10;
            n/=10;
        }
        cout<<res<<endl;
    }
}