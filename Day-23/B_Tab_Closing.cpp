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
    while(t--)
    {
        long long int a,b,n;
        cin>>a>>b>>n;
        if(b*n<=a || b>=a) cout<<1<<endl;
        else cout<<2<<endl;
    }
    return  0 ;
}