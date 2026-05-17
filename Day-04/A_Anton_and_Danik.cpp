#include<stdio.h>
int main()
{
    int n,A=0,D=0;
    scanf("%d",&n);
    char str[n+1];
    for(int i=0 ; i<n+1 ;i++){
        scanf("%c",&str[i]);
        if(str[i]=='A'){
            A++;
        }
        else if(str[i]=='D'){
            D++;
        }
        else
            continue;
    }
    if(A>D){
        printf("Anton");
    }
    else if(D>A){
        printf("Danik");
    }
    else{
        printf("Friendship");
    }
    return 0;
}