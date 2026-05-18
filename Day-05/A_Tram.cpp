#include<stdio.h>
int main()
{
   int n,a,b,present=0;
   scanf("%d",&n);
   int arr[n];
   for(int i=0 ;i<n ;i++){
    scanf("%d %d",&a,&b);
    present=present-a+b;
    arr[i]=present;
   }
   int suff=arr[0];
   for(int i=0 ;i<n ;i++){
    if(suff<arr[i]){
       suff=arr[i];
    }
   }
   printf("%d",suff);
    return 0;
}