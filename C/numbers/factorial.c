#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int r =1;
    for(int i=1;i<=n;i++){
        r=r*i;
    }
    printf("factorial of number :%d",r);
}