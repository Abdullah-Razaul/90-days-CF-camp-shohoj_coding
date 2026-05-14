#include<stdio.h>
int main()
{
    int n ;
    scanf("%d",&n);
    int arr[3];
    int sum = 0;
    for(int i = 1 ; i<=n ; i++){
     int count=0;
     for(int j = 0 ; j<3 ; j++){
         scanf("%d",&arr[j]);
         if(arr[j]==1){
              count++;
        }
     }
     if(count>=2){
        sum++;
         }
    }
    printf("%d",sum);
    return 0 ;
}