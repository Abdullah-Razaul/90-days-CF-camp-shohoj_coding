#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   int mx=INT_MIN;
   int mxi;
   int mn=INT_MAX;
   int mni;
   for(int i=0;i<n;i++)
   {
        if(arr[i]>mx)
        {
           mx=arr[i];
           mxi=i;
        }
       if(arr[i]<=mn)
       {
            mn=arr[i];
            mni=i;
       }
   }
   if(mxi<mni)
   {
       cout<<(n-1-mni)+mxi<<endl;
   }
   else
   {
       cout<<(n-1-mni)+mxi-1<<endl;
   }
   return 0 ;
}