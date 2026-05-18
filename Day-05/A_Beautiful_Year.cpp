#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    if(n>=1987 && n<2013){
        cout<<2013<<endl;
    }
    else{
        for(int i=n+1;;i++){
            int y[4];
            int m=i;
            for(int j=0;j<4;j++){
                y[j]=m%10;
                m/=10;
            }
            if (y[0] != y[1] && y[0] != y[2] && y[0] != y[3] && y[1] != y[2] && y[1] != y[3] &&
                y[2] != y[3]) {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}