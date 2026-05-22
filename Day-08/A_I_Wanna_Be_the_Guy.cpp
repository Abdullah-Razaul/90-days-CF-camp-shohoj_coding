#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n ;
   cin>>n;
   int p;
   cin>>p;
   int arr1[p];
   for(int i=0;i<p;i++)
   {
       cin>>arr1[i];
   }
   int q;
   cin>>q;
   int arr2[q];
   for(int i=0;i<q;i++)
   {
       cin>>arr2[i];
   }
   int arr[n];
   for(int i=0;i<n;i++)
   {
       arr[i]=i+1;
   }
   for(int i=0;i<p;i++)
   {
       for(int j=0;j<n;j++)
       {
           if(arr1[i]==arr[j])
            arr[j]=0;
       }
   }
   for(int i=0;i<q;i++)
   {
       for(int j=0;j<n;j++)
       {
           if(arr2[i]==arr[j])
            arr[j]=0;
       }
   }
   int cnt = 0;
   for(int i=0;i<n;i++)
   {
       if(arr[i]!=0)
       {
          cnt++;
          break;
       }
   }
   if(cnt==0)
   {
       cout<<"I become the guy."<<endl;
   }
   else
   {
       cout<<"Oh, my keyboard!"<<endl;
   }
}