#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       string ss;
       cin>>ss;
       if(ss[0]=='Y' || ss[0]=='y')
       {
           if(ss[1]=='E' || ss[1]=='e')
           {
               if(ss[2]=='S' || ss[2]=='s')
               {
                   cout<<"YES"<<endl;
               }
               else{
                cout<<"NO"<<endl;
               }
           }
           else{
                cout<<"NO"<<endl;
               }
       }
       else{
                cout<<"NO"<<endl;
               }
   }
   return 0 ;
}