#include<stdio.h>
#include<limits.h>
int main(){
    int n;int max,smax;
    printf("enter n:");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max=INT_MIN;
    smax=INT_MIN;
    for (int i = 0; i < n; i++){
        if(max<arr[i]){
            max=arr[i];
        }
    } 
    for (int i = 0; i < n; i++){
        if(arr[i]!=max && smax<arr[i]){
            smax=arr[i];
        }
    }
    
    printf("second largest element is :%d",smax);   
    return 0;
}    