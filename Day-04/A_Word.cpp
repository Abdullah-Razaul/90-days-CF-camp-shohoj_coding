#include<bits/stdc++.h>
#include<stdio.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int count1=0,count2=0;
    for(int i=0 ;str[i];i++){
        if(str[i]>='a' && str[i]<='z'){
            count1++;
        }
        else{
            count2++;
        }
    }
    if(count1>=count2){
       for(int i=0 ; str[i] ;i++){
        str[i]=tolower(str[i]);
       }
       printf("%s",str);
    }
    else{
    for(int i=0 ; str[i] ;i++){
        str[i]=toupper(str[i]);
       }
       printf("%s",str);

    }
    return 0;
}