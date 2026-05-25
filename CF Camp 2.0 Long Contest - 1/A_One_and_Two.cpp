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
      vector<int>v(n);
      cinv(v);
      int cnt  = count(v.begin(),v.end(),2);
      if(cnt == 0){
         cout<<1<<endl;
      }
      else if(cnt&1){
        cout<<-1<<endl;
      }
      else{
        int c = 0;
        for(int i=0;i<n;i++){
            if(v[i] == 2) c++;
            if(c == cnt-c){
                cout<<i+1<<endl;
                break;
            }
        }
      }
    }
}