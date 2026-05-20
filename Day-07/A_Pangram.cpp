#include <stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    char str[101];
    int arr[26]={0};
    for(int i=0 ;i<=n ;i++){
        scanf("%c",&str[i]);
    }
     for(int i=0 ;i<=n;i++){
        if(str[i]>='a' && str[i]<='z'){
            arr[str[i]+26-123]++;
        }
        else if(str[i]>='A' && str[i]<='Z'){
            arr[str[i]+26-91]++;
        }
        else{
            continue ;
        }

    }
    for(int i=0 ;i<26 ;i++){
        if(arr[i]>0){
            count++;
        }
    }
    if(count==26){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}