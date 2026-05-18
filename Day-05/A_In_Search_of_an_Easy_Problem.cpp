#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ;i<n ;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==1){
            count=1;
            break;
        }
    }
    if(count==1){
        printf("HARD");
    }
    else{
        printf("EASY");
    }
    return 0;
}