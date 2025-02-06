#include<stdio.h>
int main(){
    int n;int x;
    printf("enter n:");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    printf("enter element to be searched:");\
    scanf("%d",&x);
    for(int i =0 ;i<n;i++){
        if (arr[i]==x){
            printf("%d is present in the array at index %d ",x,i);
            break;

        }
    }
    

}