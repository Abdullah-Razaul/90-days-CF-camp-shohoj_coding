#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    char str[100];
    scanf("%s",str);
    int len;
    int count;
    for(int i=0 ;str[i] ;i++){
        if(str[i]>='a' && str[i]<='z'){
            count=0;
        }
        else{
            count=1;
            break;
        }
    }
    if(count==0){
        for(int i=0 ;str[i] ;i++){
            for(int j=i+1 ;str[j] ;j++){
                if(str[i]==str[j] && str[i]!=' '){
                     str[j]=' ';
                }
            }
        }
        for(int i=0 ;str[i];i++){
            if(str[i]!=' '){
                len++;
            }
        }
        if(len%2==0){
            printf("CHAT WITH HER!");
        }
        else{
            printf("IGNORE HIM!");
        }
    }
    else{
        printf("something went worng");
    }
    return 0;
}