#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define coutv(v) for(auto &i : v) cout<<i<<" ";
#define cinv(v) for(auto &i : v) cin>>i;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        cinv(v);
        sort(v.begin(),v.end());
        int cnt  = 1;
        int mx  = INT_MIN;
        for(int i=0;i<n-1;i++){
            if( v[i]+1 == v[i+1]){
                cnt++;
            }
            else if(v[i]==v[i+1]){

            }
            else{
                mx = max(mx,cnt);
                cnt  = 1;
            }

        }
        mx = max(mx,cnt);
        cout<<mx<<endl;
    }
    return 0;
}