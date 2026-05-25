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
      int g = __gcd(v[0],v[1]);
      for(int i=2;i<n;i++){
        g = __gcd(g,v[i]);
      }
      if(g <= n){
         bool flag  = false;
         for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j){
                    if(__gcd(v[i],v[j]) <= 2){
                        flag = true;
                        break;
                    }
                }
            }
            if(flag) break;
         }
         if(flag){
            cout<<"Yes"<<endl;
         }
         else cout<<"No"<<endl;
      }
      else cout<<"No"<<endl;
    }
}