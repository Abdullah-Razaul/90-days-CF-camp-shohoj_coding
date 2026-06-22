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
        vector<int>v(n+1);
        for(int i=0;i<n;i++){
            int a ;
            cin>>a;
            v[i+1] = a;
        }
        for(int i=1;i<=n/2;i++){
            if(v[i] != i){
                int j = i*2;
                while(j<=n){
                    if(v[j] == i){
                        swap(v[j],v[i]);
                        break;
                    }
                    j*=2;
                }
            }
        }
        bool flag  = true;
        for(int i=1;i<=n;i++){
            if(v[i] != i){
                flag  = false;
                break;
            }
        }
        if(flag) yes
        else no
        
    }
    return 0;
}