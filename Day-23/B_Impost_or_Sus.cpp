#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define coutv(v) for(auto &i : v) cout<<i<<" ";
#define cinv(v) for(auto &i : v) cin>>i;
const int M = 1e9+7;
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
const int N = 1e4+7;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string ss;
        cin>>ss;
        int cnt = 0;
        if(ss[0]=='u')
        {
            ss[0] = 's';
            cnt++;
        }
        if(ss[ss.size()-1]=='u')
        {
            ss[ss.size()-1] = 's';
            cnt++;
        }
        for(int i=1; i<ss.size()-1; i++)
        {
            if(ss[i]=='u')
            {
                if(ss[i-1] != 's' || ss[i+1] != 's')
                {
                    cnt++;
                    ss[i+1] = 's';
                }
            }
        }
        cout<<cnt<<endl;
    }
}