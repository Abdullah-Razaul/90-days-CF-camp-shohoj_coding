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
        string ss;
        cin>>ss;
        int n  = ss.size();
        bool flag  = false;
        for(int i=0;i<n-3;i++){
            if(ss[i] == ss[i+1] && ss[i] == ss[i+2] && ss[i]==ss[i+3]){
                flag  = true;
                break;
            }
        }
        if(flag){
            no
            continue;
        }
        int a  = 0;
        int b  = 0;
        for(int i=0;i<n-1;i++){
            if(ss[i] == ss[i+1]){
                if(ss[i] == 'a') a++;
                else b++;
            }
        }
        int a3 = 0;
        int b3 = 0;
        for(int i=0;i<n-2;i++){
            if(ss[i] == ss[i+1] && ss[i] == ss[i+2]){
                if(ss[i] == 'a') {
                    a3++;
                    a-=2;
                }
                else{
                    b3++;
                    b-=2;
                }
                i+=2;
            }
        }
        if(a3 == 1 && b3 ==0 && a <= 0 && b <= 0){
            yes
            continue;
        }
        else if(b3 == 1 && a3 == 0 && a<=0 && b <= 0){
            yes
            continue;
        }
        else if(a3>1 || b3>1){
            no
            continue;
        }
        a  = 0;
        b  = 0;
        for(int i=0;i<n-1;i++){
            if(ss[i] == ss[i+1]){
                if(ss[i] == 'a') a++;
                else b++;
            }
        }
        if(a+b<=2){
            yes
        }
        else no
    }
    return 0;
}