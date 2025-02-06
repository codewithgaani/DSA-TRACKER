#include<stdio.h>
int main(){
    int n;
    printf("enter number whose table is to be printed:");
    scanf("%d",&n);
    for ( int i = 0; i<=10; i++)
    
    {
        printf("%d X %d =%d \n",n,i,n*i);
    }
    
}