#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int a=0;
    for (int i=1;i*i<n;i++){
          if(n%i==0){
               a++;
               if(n/i!=i) a++;
        }

    }
if(a==2) printf("prime");
else  printf("it is not a prime number");
return 0;



}
    
