#include<stdio.h>
int isprime(int);
int main()

    {
        int n1,n2,sum=0;
        printf("enter first number:");
        scanf("%d",&n1);
        printf("enter second number:");
        scanf("%d",&n2);
        printf("prime numbers between %d and %d are:",n1,n2);
        for(int i=n1;i<=n2;i++){
            if (isprime( i)){
                printf("%d,",i); 
                sum=sum+i;
            }

            }
            printf("\nsum of prime numbers between %d and %d is:%d",n1,n2,sum);
            return 0;

        }
        

    
int isprime(int n){
    for(int i=2;i*i<=n;i++){
        if (n%i==0){
            return 0;
        }
        
    }
    return 1;
}
