#include<stdio.h>
int factorial(int n){
   
    int r =1;
    for(int i=1;i<=n;i++){
        r=r*i;
    }
    return r ;
}
int main(){
     int n;
    printf("enter a number:");
    scanf("%d",&n);
    printf("factorial of first %d numbers is: \n",n);
    for(int i=1;i<=n;i++){
        printf("%d!= %d\n",i,factorial(i)); 
        }
    return 0;
    


}