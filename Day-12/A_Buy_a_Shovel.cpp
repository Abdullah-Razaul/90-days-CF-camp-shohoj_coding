#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,r;
    cin>>k>>r;
    for(int i=1;i<=9;i++)
    {
        int fee=i*k;
        if(fee%10 == 0)
        {
            cout<<i<<endl;
            break;
        }
        else if( r == fee%10)
        {
            cout<<i<<endl;
            break;
        }
    }
}