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
int arr[10][10] ={
    {1,1,1,1,1,1,1,1,1,1},
    {1,2,2,2,2,2,2,2,2,1},
    {1,2,3,3,3,3,3,3,2,1},
    {1,2,3,4,4,4,4,3,2,1},
    {1,2,3,4,5,5,4,3,2,1},
    {1,2,3,4,5,5,4,3,2,1},
    {1,2,3,4,4,4,4,3,2,1},
    {1,2,3,3,3,3,3,3,2,1},
    {1,2,2,2,2,2,2,2,2,1},
    {1,1,1,1,1,1,1,1,1,1}
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       vector<string>v(10);
       for(int i=0;i<10;i++){
          cin>>v[i];
       }
       int res  = 0;
       for(int i=0;i<10;i++){
         for(int j = 0 ; j<10 ; j++){
            if(v[i][j] == 'X'){
                res += arr[i][j];
            }
         }
       }
       cout<<res<<endl;
    }
    return 0;
}