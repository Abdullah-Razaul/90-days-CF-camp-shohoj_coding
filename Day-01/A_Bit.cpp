#include<stdio.h>
int main()
{
    int n,x=0;
    scanf("%d",&n);
    int i=0;
    while(i<n){
        char str[100];
        scanf("%s",str);
        i++;
        if(str[0]=='X' && str[1]=='+' && str[2]=='+'){
            x++;
        }
        else if(str[0]=='+' && str[1]=='+' && str[2]=='X'){
            ++x;
        }
        else if(str[0]=='-' && str[1]=='-' && str[2]=='X'){
            --x;
        }
        else if(str[0]=='X' && str[1]=='-' && str[2]=='-'){
            x--;
        }
        else
            printf("try again.");
    }


    printf("%d",x);
    return 0 ;
}