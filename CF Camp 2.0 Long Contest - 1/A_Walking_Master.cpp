#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define coutv(v)      \
    for (auto &i : v) \
        cout << i << " ";
#define cinv(v)       \
    for (auto &i : v) \
        cin >> i;
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int a,b,c,d;
       cin>>a>>b>>c>>d;
       int cnt  = 0;
       if(b<=d){
          cnt += (d-b);
          a += (d-b);
       }
       else{
         cout<<-1<<endl;
         continue;
       }
       if(a>=c){
         cnt  += a-c;
       }
       else{
        cout<<-1<<endl;
        continue;
       }
       cout<<cnt<<endl;

    }
    return 0;
}