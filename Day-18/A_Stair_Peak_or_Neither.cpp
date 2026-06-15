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
        int a , b , c;
        cin>>a>>b>>c;
        if(a<b && b<c) cout<<"STAIR"<<endl;
        else if(a<b && b>c) cout<<"PEAK"<<endl;
        else cout<<"NONE"<<endl;
    }
}