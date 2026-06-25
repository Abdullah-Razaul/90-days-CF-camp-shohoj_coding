#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define cinv(v) for(auto &val:v) cin>>val;
#define cout(v) for(auto &val:v) cout<<val<<" ";
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    cinv(v);
    sort(v.rbegin(),v.rend());
    long long int sum = 0;
    for(auto val : v){
        sum += val;
    }
    int cnt = 0;
    long long int sum2 = 0;
    for(auto val : v){
        sum2 += val;
        cnt++;
        if(sum2 > sum-sum2) break;
    }
    cout<<cnt<<endl;
}