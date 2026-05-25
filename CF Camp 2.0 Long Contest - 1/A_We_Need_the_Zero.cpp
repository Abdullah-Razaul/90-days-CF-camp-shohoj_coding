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
      vector<int>a(n);
      cinv(a);
      vector<int>b(n);
      bool flag  = true;
      for(int i = 0 ;i<=256;i++){
         for(int j=0;j<n;j++){
            b[j] = (a[j]^i);
         }
         int res = b[0];
         for(int j=1;j<n;j++){
            res = (res^b[j]);
         }
         if(res == 0){
            cout<<i<<endl;
            flag = false;
            break;
         }
      }
      if(flag) cout<<-1<<endl;
    }
}