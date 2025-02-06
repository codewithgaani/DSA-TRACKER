#include<stdio.h>
int fibo(int n){
    if(n==0|| n==1 ) return n;
     return(fibo(n-1)+fibo(n-2));

}
int main(){
    int n;
    printf("enter nth fibonacci term");
    scanf("%d",&n);
    int x = fibo(n);
     printf("%d",x);

    return 0;
}
