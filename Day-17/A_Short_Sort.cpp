#include <bits/stdc++.h>
using namespace std;
const int mod = 676767677;
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
    cin >> t;
    while (t--)
    {
       string ss;
       cin>>ss;
       int cnt  = 0;
       if(ss[0] == 'a') cnt++;
       if(ss[1] == 'b') cnt++;
       if(ss[2] == 'c') cnt++;

       if(cnt  == 0) no
       else yes
    }
    return 0;
}