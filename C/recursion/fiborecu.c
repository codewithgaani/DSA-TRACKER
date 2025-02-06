// #include<stdio.h>
// void fibo(int n1,int n2,int i, int n)
// {
//     if(i == 1){
//         printf("%d, ",n1);
//         printf("%d, ",n2);
//     } else if(i == n-1) {
//         return;
//     }
//     int temp = n1 + n2;
//     printf("%d, ",temp);
//     fibo(n2,temp,i+1,n);
// }

// int main(){
//     fibo(0,1,1,8);
     
#include <stdio.h>
#include<math.h>
int sosq(int i,int n){
    int x=n%10;
    n=n/10;
    int p = pow(x,i);
    if(n == 0){
        return 0;
    } else {
        return p + sosq(i + 2,n) ;
    }

    

}
int main(){
    printf("%d", sosq(0,412));
}