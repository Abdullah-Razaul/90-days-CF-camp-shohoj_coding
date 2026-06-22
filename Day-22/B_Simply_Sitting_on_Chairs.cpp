#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define coutv(v)      \
    for (auto &i : v) \
        cout << i << " ";
#define cinv(v)       \
    for (auto &i : v) \
        cin >> i;
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
        vector<int>fre(n+1);
        for(int i=0;i<n;i++){
                if(v[i] <= i+1){
                    cnt++;
                }
        }
        cout<<cnt<<endl;
    }
    return 0;
}