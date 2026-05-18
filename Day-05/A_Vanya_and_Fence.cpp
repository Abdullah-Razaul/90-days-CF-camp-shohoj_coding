#include<stdio.h>
int main()
{
    int n,h,count=0;
    scanf("%d %d",&n,&h);
    int arr[n];
    for(int i=0 ;i<n ;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0 ;i<n ;i++){
        if(arr[i]>h){
            count=count+2;
        }
        else{
            count=count+1;
        }
    }
    printf("%d",count);
    return 0;
}