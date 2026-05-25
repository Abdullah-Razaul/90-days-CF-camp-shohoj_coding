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
        int n;
        cin>>n;
        vector<int>v(n);
        cinv(v);
        int ne = count(v.begin(),v.end(),-1);
        int po = count(v.begin(),v.end(),1);
        int cnt  = 0;
        while(po < ne || ne%2 !=  0){
            ne --;
            po ++;
            cnt ++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}