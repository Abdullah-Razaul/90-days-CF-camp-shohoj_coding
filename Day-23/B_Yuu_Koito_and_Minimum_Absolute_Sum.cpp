#include<bits/stdc++.h>
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define srt(v) sort(v.begin(),v.end());
#define rsrt sort(v.rbegin(),v.rend());
#define cinv(v) for(auto &i : v) cin>> i;
#define coutv(v) for(auto i : v) cout<<i<<" "; cout<<endl;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b);
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        cinv(v);
        vector<int>tmp(n);
        tmp = v;
        for(int i=0;i<n;i++){
            if(v[i]==-1) tmp[i] = 0;
        }
        int sum = 0;
        for(int i=0;i<n-1;i++){
            sum+= tmp[i+1]-tmp[i];
        }
        if(sum==0){
            cout<<0<<endl;
            coutv(tmp);
        }
        else{
            if(v[n-1]==-1){
                tmp[n-1] =tmp[n-1]-sum;
                sum = 0;
            }
            else if(v[0]==-1){
                tmp[0] = tmp[0]+sum;
                sum = 0;
            }
            cout<<abs(sum)<<endl;
            coutv(tmp);
        }
    }
    return  0 ;
}