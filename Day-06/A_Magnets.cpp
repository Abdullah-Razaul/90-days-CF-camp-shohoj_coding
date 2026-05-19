#include<stdio.h>
int main()
{
    int n,j=1,count=1;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ;i<n ;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0 ;j<n ;i++){
        if(arr[i]!=arr[j]){
            count++;
        }
        j++;
    }
     printf("%d\n",count);
    return 0;
}
