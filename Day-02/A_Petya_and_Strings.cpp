#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
   char str1[100],str2[100];
   scanf("%s",str1);
   scanf("%s",str2);
   int len1=strlen(str1),len2=strlen(str2),count;
   for(int i=0 ; str1[i] ; i++){
        str1[i]=tolower(str1[i]);
        str2[i]=tolower(str2[i]);
   }
   for(int i=0 ; str1[i] ;i++){
    if(str1[i]==str2[i])
        count=0;
    else if(str1[i]>str2[i]){
        count=1;
        break;
    }
    else if(str1[i]<str2[i]){
        count=-1;
        break;
    }
    else{
        return 0;
    }
   }
   printf("%d",count);
   return 0 ;
}