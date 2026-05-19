#include<stdio.h>
#include<bits/stdc++.h>
int main()
{
    int n,d;
    double count;
    scanf("%d",&n);
    for(int i=1 ;i<=n ;i++){
        scanf("%d",&d);
        count=count+d;
    }
    printf("%.12lf",(count/(n*100))*100);
    return 0;
}