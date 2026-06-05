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
    int n;
    cin>>n;
    vector<int>v(n);
    cinv(v);
    int i = 0;
    int j = n-1;
    bool flag = true;
    int d = 0;
    int s = 0;
    while(i<=j){
        if(flag){
            if(v[i] > v[j]){
                s+=v[i];
                i++;
            }
            else {
                s += v[j];
                j--;
            }
            flag = false;
        }
        else{
            if(v[i] > v[j]){
                d+=v[i];
                i++;
            }
            else{
                d += v[j];
                j--;
            }
            flag = true;
        }
    }
    cout<<s<<" "<<d<<endl;
}