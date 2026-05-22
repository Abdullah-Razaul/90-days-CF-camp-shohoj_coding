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
    int n,m;
    cin>>n>>m;
    char ss[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ss[i][j] = '#';
        }
    }
    int flag = true;
    for(int i=0;i<n;i++){
        if(i%2 == 0) continue;
        if(flag){
            for(int j=0;j<m-1;j++) ss[i][j] ='.';
            flag = false;
        }
        else{
            for(int j=1;j<m;j++) ss[i][j] ='.';
            flag = true;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ss[i][j];
        }
        cout<<endl;
    }
    return 0;
}