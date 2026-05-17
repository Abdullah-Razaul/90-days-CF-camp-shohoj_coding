#include<stdio.h>
#include<string.h>
int main()
{
    char str1[101],str2[101];
    int count=0;
    scanf("%s",str1);
    scanf("%s",str2);
    int j=strlen(str1);
    for(int i=0 ;str1[i];i++){
        if(str2[i]!=str1[j-1]){
            count=1;
            break;
        }
        j--;

    }
    if(count==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}