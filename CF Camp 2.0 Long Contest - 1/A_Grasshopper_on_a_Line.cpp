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
        int n,k;
        cin>>n>>k;
        if(n%k == 0){
            cout<<2<<endl;
            cout<<n-1<<" "<<1<<endl;
        }
        else{
            cout<<1<<endl;
            cout<<n<<endl;
        }
    }
    return 0;
}