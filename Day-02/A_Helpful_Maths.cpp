#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
  char str[100];
  scanf("%[^\n]",str);
  int len=strlen(str);
  for(int i=0 ; i<len ; i++){
    int k=2,temp;
    for(int j =0 ; k<len ; j+=2){
        if(str[j]>str[k]){
            temp=str[j];
            str[j]=str[k];
            str[k]=temp;
        }
        k+=2;
    }
  }
  printf("%s",str);
  return 0;
}