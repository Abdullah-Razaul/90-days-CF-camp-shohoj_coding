#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    if(1<=n && n<=50){
    char str[n+1];
    for(int i=0 ;i<n+1 ;i++){
        scanf("%c",&str[i]);
    }
    int j=1;
    for(int i =0 ;j<n+1 ;i++){
        if(str[i]==str[j]){
            count++;
        }
        j++;
    }
    }
    printf("%d",count);
    return 0;
}