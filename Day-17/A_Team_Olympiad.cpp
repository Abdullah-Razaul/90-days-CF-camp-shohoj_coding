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
    int t=1;
    //cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        cinv(v);
        vector<vector<int>>res;
        while(true){
            vector<int>tmp;
            for(int i=0;i<n;i++){
                if(v[i] == 1){
                    tmp.push_back(i+1);
                    v[i] = 0;
                    break;
                }
            }
            if(tmp.size() == 0) break;

            for(int i=0;i<n;i++){
                if(v[i] == 2){
                    tmp.push_back(i+1);
                    v[i] = 0;
                    break;
                }
            }
            if(tmp.size() == 1) break;

            for(int i=0;i<n;i++){
                if(v[i] == 3){
                    tmp.push_back(i+1);
                    v[i] = 0;
                    break;
                }
            }
            if(tmp.size() == 2) break;

            res.push_back(tmp);
        }
        cout<<res.size()<<endl;
        for(auto val : res){
            for(auto va : val){
                cout<<va<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}