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
        int n,a;
        cin>>n>>a;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int ch1 = a - 1;
        int ch2 = a + 1;
        int ch1p = 0;
        int ch2p = 0;
        for(int i=0;i<n;i++){
            if(abs(ch1-v[i])< abs(a-v[i])) ch1p++;
            if(abs(ch2-v[i])< abs(a-v[i])) ch2p++;
        }
        if(ch1p>ch2p){
            cout<<ch1<<endl;
        }
        else{
            cout<<ch2<<endl;
        }

    }
    return  0 ;
}