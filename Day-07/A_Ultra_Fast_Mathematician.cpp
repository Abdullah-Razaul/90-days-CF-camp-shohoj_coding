#include<stdio.h>
int main()
{
    char str1[101],str2[101];
    scanf("%s",str1);
    scanf("%s",str2);
    for(int i=0 ;str1[i];i++){
        if(str1[i]!=str2[i]){
            printf("%d",1);
        }
        else{
            printf("%d",0);
        }
    }
    return 0;
}