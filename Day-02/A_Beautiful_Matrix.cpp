#include<stdio.h>
int main()
{
    int arr[5][5],k,l;
    for(int i =0 ; i<5 ; i++){
        for(int j =0 ; j<5 ; j++){
                scanf("%d",&arr[i][j]);

        }
    }
    for(int i =0 ; i<5 ; i++){
        for(int j =0 ; j<5 ; j++){
                if(arr[i][j]>0){
                    k=i+1;
                    l=j+1;
                    break;
                }
        }
    }
    if(k>=3 && l>=3){
        printf("%d",k-3+l-3);
    }
    else if(k>=3 && l<=3){
        printf("%d",k-3+3-l);
    }
    else if(k<=3 && l>=3){
        printf("%d",3-k+l-3);
    }
    else if(k<=3 && l<=3){
        printf("%d",3-k+3-l);
    }
    else{
        printf("%d",0);
    }
    return 0 ;
}