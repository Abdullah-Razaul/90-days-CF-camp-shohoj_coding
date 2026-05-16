#include <stdio.h>

int main()
{

    int x;

    scanf("%d",&x);

    int quotient = x/5;

    if(x%5==0)
    {
        printf("%d",quotient);

    }
    else
    {
        printf("%d",quotient+1);
    }



    return 0;





}