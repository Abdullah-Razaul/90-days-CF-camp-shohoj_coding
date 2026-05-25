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
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
bool chk(string ss1,string ss2)
{
    bool flag = false;
    for(int i=0; i<=ss1.size()-ss2.size(); i++)
    {
        string tmp = ss1.substr(i,ss2.size());
        if(tmp == ss2)
        {
            flag = true;
            break;
        }
    }
    return flag;
}
int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        string ss1,ss2;
        cin>>ss1>>ss2;
        int cnt  = 0;
        if(m<=n)
        {
            if(chk(ss1,ss2))
            {
                cout<<0<<endl;
                continue;
            }
            cnt++;
            ss1+=ss1;
        }
        bool flag = true;
        while(ss1.size() <= 2*ss2.size())
        {
            if(ss1.size()>=ss2.size())
            {
                if(chk(ss1,ss2))
                {
                    cout<<cnt<<endl;
                    flag = false;
                    break;
                }
            }
            ss1 += ss1;
            cnt++;
        }
        if(flag)
        {
            if(ss1.size()>=ss2.size())
            {
                if(chk(ss1,ss2))
                {
                    cout<<cnt<<endl;
                    flag = false;
                }
            }
        }
        if(flag) cout<<-1<<endl;
    }
    return 0;
}