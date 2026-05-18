#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    string ss;
    cin>>ss;
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<a-1;j++)
        {
            if(ss[j]=='B' && ss[j+1]=='G')
            {
                swap(ss[j],ss[j+1]);
                j++;
            }
        }
    }
    cout<<ss<<endl;
}