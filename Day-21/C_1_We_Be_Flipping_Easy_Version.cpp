#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define vc vector
#define vi vc<int>
#define vl vc<ll>
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define optimizer()                    \
  ios::sync_with_stdio(false); \
  cin.tie(0);
#define rvs(v) reverse(v.begin(), v.end());
#define F first
#define S second
#define MOD 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define PI 2 * acos(0.0)
#define pii pair<int, int>
#define coutv(v)       \
  for (auto it : v)    \
    cout << it << ' '; \
  cout << endl;
#define cinv(v)      \
  for (auto &it : v) \
    cin >> it;
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define ld long double
#define nl '\n'
const int N = 2e5 + 7;
using namespace std;


void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    cinv(v);
    vector<int>res;
    for(int i=n-1;i>=0;i--){
        if(res.size()%2==0){
            if(v[i] > 0){
                res.push_back(i);
            }
        }
        else{
            v[i] *= -1;
            if(v[i] > 0){
                res.push_back(i);
            }
        }
    }
    cout<<res.size()<<endl;
    for(auto val : res){
        cout<<val+1<<" ";
    }
    cout<<endl;
}


int main()
{
    optimizer()
    int t ;
    cin >> t;
    for (int cs = 1; cs <= t; cs++)
    {
        // cout << "Case " << cs << ": ", solve();
        // printf("Case %d: ", cs), solve();
        solve();
    }
    return 0;
}