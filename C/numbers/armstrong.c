#include<stdio.h>
#include<stdbool.h>
bool armstrong(int n){
     int m =0;
     int org=n;
    while(n>0){
       int r=n%10;
        m=m+(r*r*r);
        n=n/10; 
    }
    return (m==org);
    
}
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if (armstrong(n)) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is not an Armstrong number.\n", n);
    }
    return 0;
}