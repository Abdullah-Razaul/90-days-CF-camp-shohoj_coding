#include<stdio.h>
int main()
{
   int M,N,board;
   scanf("%d %d",&M,&N);
   if(1<=M && M<=N && M<=16 && N<=16 && 1<=N){
    board = M*N;
   }
   printf("%d",board/2);
    return 0 ;
}