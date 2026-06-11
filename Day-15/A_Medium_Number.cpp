#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define coutv(v)     \
   for (auto &i : v) \
      cout << i << " ";
#define cinv(v)      \
   for (auto &i : v) \
      cin >> i;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int a,b,c;
      cin>>a>>b>>c;
      int mx = max(a,max(b,c));
      int mn = min(a,min(b,c));
      if(a != mn && a!=mx){
         cout<<a<<endl;
      }
      else if(b != mn && b != mx){
         cout<<b<<endl;
      }
      else cout<<c<<endl;
   }
   return 0;
}