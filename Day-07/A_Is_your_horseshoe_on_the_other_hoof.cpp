#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int arr[4];
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    int cnt=0;
    for(int i=0;i<4;i++)
    {
       for(int j=0;j<4;j++)
       {
           if(i==j)
            continue;
           if(arr[i]==arr[j])
           {
               arr[j]=0;
           }
       }
    }
    for(int i=0;i<4;i++)
    {
        if(arr[i]==0)
            cnt++;
    }
    cout<<cnt<<endl;

}