#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string>v(n);
    for(auto &val : v){
        cin>>val;
    }
    int res = 0;
    for(auto val : v){
        if(val == "Tetrahedron") res += 4;
        else if(val == "Cube") res += 6;
        else if(val == "Octahedron") res += 8;
        else if(val == "Dodecahedron") res += 12;
        else res += 20; 
    }
    cout<<res<<endl;
}