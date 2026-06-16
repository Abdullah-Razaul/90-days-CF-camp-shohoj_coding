#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define coutv(v) for(auto &i : v) cout<<i<<" ";
#define cinv(v) for(auto &i : v) cin>>i;
const int M = 1e9+7;
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
int main()
{
    int t;
    cin>>t;
    string s = "Timur";
    sort(s.begin(),s.end());
    while(t--){
        int n;
        cin>>n;
        string ss;
        cin>>ss;
        sort(ss.begin(),ss.end());
        if(n==5){
            if(ss ==s) yes
            else no
        }
        else{
            no
        }
    }
    return 0;
}