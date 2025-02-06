#include<stdio.h>
int main(){
    int n;int count=0;
    printf("enter n:");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    printf("enter number:");
    scanf("%d",&x);
    for (int i =0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (arr[i]+arr[j]==x){
                count++;
                printf("(%d,%d)",arr[i],arr[j]);
            }
        }
    }
    printf("\ntotal number of pairs whose sum is equal to x:%d",count);
    return 0;
}