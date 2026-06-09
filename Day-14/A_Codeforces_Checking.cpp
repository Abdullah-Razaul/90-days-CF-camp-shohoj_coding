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
    cin>>t;
    while(t--){
        string ss = "codeforces";
        char a;
        cin>>a;
        bool flag  = false;
        for(int i=0;i<ss.size();i++){
            if(a==ss[i]){
                flag  = true;
                break;
            }
        }
        if(flag) yes
        else no
    }
    return 0;
}