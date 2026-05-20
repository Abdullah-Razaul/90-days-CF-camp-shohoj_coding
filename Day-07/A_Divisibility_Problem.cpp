#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a%b==0)
        {
            cout<<0<<endl;
        }
        else
        {
            int res = (a/b)+1;
            cout<<(res*b) - a<<endl;
        }
    }
    return 0 ;
}