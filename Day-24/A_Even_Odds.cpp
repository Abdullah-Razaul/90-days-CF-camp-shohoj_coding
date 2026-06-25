#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;
    cin>>n>>k;
    long long int p = ceil(n/2.0);
    if(k>p){
        cout<<(k-p)*2<<endl;
    }
    else{
        cout<<2*k-1<<endl;
    }
}