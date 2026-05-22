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
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int res  = 0;
    res += n/100;
    n = n%100;

    res+= n/20;
    n = n%20;

    res += n/10;
    n= n%10;

    res+= n/5;
    n = n%5;

    res += n/1;

    cout<<res<<endl;

}