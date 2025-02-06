#include<stdio.h>
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<=n;i++){
        printf("\nENTER MARK %d =",i);
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<=n;i++){
        if(arr[i]<35) 
        printf(" %d ",i);
    
    }

    return 0;
}