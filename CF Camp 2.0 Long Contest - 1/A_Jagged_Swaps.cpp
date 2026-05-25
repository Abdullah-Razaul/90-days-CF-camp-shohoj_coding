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
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        cinv(v);
        for(int i=0;i<n;i++){
            for(int j=1;j<n-1;j++){
                if(v[j]>v[j-1] && v[j]>v[j+1]){
                    swap(v[j],v[j+1]);
                }
            }
        }
        bool flag1 = true;
        for(int i=0;i<n;i++){
            if(v[i] != i+1){
                flag1 = false;
            }
        }
        if(flag1) yes
        else no

    }
    return 0;
}