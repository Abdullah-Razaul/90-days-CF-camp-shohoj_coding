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
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        if(k == 1){
            no
        }
        else if(k == 2){
            if(x == 1){
                if(n%2 == 0){
                    yes
                    cout<<n/2<<endl;
                    for(int i=0;i<n/2;i++) cout<<2<<" ";
                    cout<<endl;
                }
                else no
            }
            else{
                yes
                cout<<n<<endl;
                for(int i=0;i<n;i++) cout<<1<<" ";
                cout<<endl;
            }
        }
        else{
            if(x == 1){
                if(n&1){
                    yes
                    n -= 3;
                    cout<<1+n/2<<endl;
                    cout<<3<<" ";
                    for(int i=0;i<n/2;i++) cout<<2<<" ";
                }
                else{
                    yes
                    cout<<n/2<<endl;
                    for(int i=0;i<n/2;i++) cout<<2<<" ";
                    cout<<endl;
                }
            }
            else{
                yes
                cout<<n<<endl;
                for(int i=0;i<n;i++) cout<<1<<" ";
                cout<<endl;
            }
        }
    }
}