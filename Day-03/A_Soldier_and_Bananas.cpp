#include<stdio.h>
int main()
{
    int k,n,w;
    scanf("%d %d %d",&k,&n,&w);
    int count=0;
    for(int i=1 ;i<=w ;i++){
        count =count+k*i;
    }
    if(count>n){
        printf("%d",count-n);
    }
    else{
        printf("%d",0);
    }
    return 0;
}