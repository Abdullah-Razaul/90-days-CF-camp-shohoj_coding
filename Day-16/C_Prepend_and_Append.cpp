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
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      string ss;
      cin>>ss;
      int l = 0;
      int r = n-1;
      int cnt  = 0;
      while(l<r){
        if(ss[l] == '0' && ss[r] == '1'){
            l++;
            r--;
            cnt++;
        }
        else if(ss[l] == '1' && ss[r] == '0'){
            l++;
            r--;
            cnt++;
        }
        else break;
      }
      cout<<n-2*cnt<<endl;
    }
}