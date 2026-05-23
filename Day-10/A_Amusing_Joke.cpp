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
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    map<char,int>mp1,mp2;
    for(int i=0;i<s1.size();i++){
        mp1[s1[i]]++;
    }
    for(int i=0;i<s2.size();i++){
        mp1[s2[i]]++;
    }
    for(int i=0;i<s3.size();i++){
        mp2[s3[i]]++;
    }
    bool flag = true;
    for(auto val : mp1){
        if(val.second != mp2[val.first]){
            flag = false;
            break;
        }
    }
    if(flag && mp1.size() == mp2.size()) yes
    else no
    return 0;
}