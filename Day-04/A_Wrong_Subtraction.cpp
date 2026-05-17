#include<stdio.h>
int main()
{
   int n,k;
   scanf("%d %d",&n,&k);
   for(int i=1 ; i<=k ;i++){
        int temp;
        temp=n%10;
        if(temp!=0){
            n=n-1;
        }
        else{
            n=n/10;
        }
   }
   printf("%d",n);
   return 0;
}