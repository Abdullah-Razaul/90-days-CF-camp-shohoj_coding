#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char str[100];
    for(int i = 1 ; i<= n ; i++){
        scanf("%s",str);
        int count=0;
        for(int j=0;str[j];j++){
            count++;
        }
        if(count>10){
           printf("%c%d%c\n",str[0],count-2,str[count-1]);
        }
        else{
            printf("%s\n",str);
        }
    }

    return 0 ;
}