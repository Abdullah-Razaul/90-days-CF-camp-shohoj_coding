#include <iostream>
using namespace std;
int main() {
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    int arr[e];
    for(int i=0;i<e;i++)
    {
        arr[i]=i+1;
    }
    int cnt = 0 ;
    for(int i=0;i<e;i++)
    {
        if(arr[i]%a==0 || arr[i]%b==0 || arr[i]%c==0 || arr[i]%d==0)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
}