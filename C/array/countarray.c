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
    printf("enter number :");
    scanf("%d",&x);
    for (int i=0;i<n;i++){
        if(arr[i]>x){
            count+=1;

        }
       
    }
    printf("number of elements in given array greater than x :%d",count);
    return 0;
}