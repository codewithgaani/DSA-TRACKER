#include<stdio.h>
int main(){
    int n, sumo=0,sume=0,diff;
    printf("enter n:");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if (i%2==0){
            sume=sume+arr[i];
        }
        else {
            sumo=sumo+arr[i];
        }
    }
    diff=sume-sumo;
    printf("difference between ele at even indices to the sum of ele at odd indices =%d",diff);
    return 0;
}