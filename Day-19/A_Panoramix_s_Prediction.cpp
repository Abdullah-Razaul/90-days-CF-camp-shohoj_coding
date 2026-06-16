#include<bits/stdc++.h>
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define tst int t;cin>>t;while(t--)
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define MOD 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define PI 2*acos(0.0)
#define pii pair<int,int>
#define coutv(v) for(auto it:v)cout<<it<<' ';cout<<endl;
#define cinv(v) for(auto &it:v)cin>>it;
#define all(v) v.begin(),v.end()
#define ld long double
#define nl '\n'
int const M  = 1e9+7;
using namespace std;
int main()
{
    int t=1;
    //cin>>t;
    while(t--){
       int n,m;
       cin>>n>>m;
       int res = n+1;
       bool flag = true;
       while(true){
        for(int i=2;i*i<=res;i++){
           if(res%i == 0){
              flag = false;
              break;
           }
       }
       if(flag) break;
       res ++;
       flag = true;
       }
       if(res == m) yes
       else no
    }
}