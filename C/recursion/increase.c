//method 1 by using parameters
// #include<stdio.h>
// void increase(int x ,int n){
//     if(x>n )
//     return;
//     printf("%d\n",x);
//     increase(x+1,n);
//     return;
//     }
// int main(){
//     int n;
//     printf("input n:");
//     scanf("%d",&n);
//     increase(1,n);
//     return 0;

// } 

//method 2 without parameters


#include<stdio.h>
void increase(int n){
    if(n==0 ) // base case
    return;
    increase(n-1); // call
    printf("%d\n",n); //code
    return;
    }
int main(){
    int n;
    printf("input n:");
    scanf("%d",&n);
    increase(n);
    return 0;

} 


