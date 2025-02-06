#include<stdio.h>
void main(){
    int n,sum1=0,sum2=0;
    printf("enter no of terms:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i++){
        if (a[i]%2==0){
            sum1=sum1+a[i];
            
        }
        else {
            sum2=sum2+a[i];
           
        }
    }
     printf(" sum of even indexes =%d",sum1);
     printf("\nsum of odd indexes =%d",sum2);

}