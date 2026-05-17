#include<stdio.h>
int main()
{
    long long int n,rem,div;
    int count=0;
    scanf("%lld",&n);
    for(int i=0;n!=0;i++){
        rem=n%10;
        div=n/10;
        n=div;
        if(rem==4 || rem==7){
            count++;
        }
    }
    if(count==4 || count==7){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}