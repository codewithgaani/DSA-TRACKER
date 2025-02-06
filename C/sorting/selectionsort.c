#include<stdio.h>
#include<limits.h>
int main (){
    int n,i;
    printf("enter array size:");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements:");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        int min=INT_MAX;
        int minidx=-1;
        for(int j=i;j<n;j++){
            if(min>arr[j]){
            min=arr[j];
            minidx=j;
            }
        }
        //swap the min and first ele of unsorted array
        //swap minidx and i
        int temp=arr[minidx];
        arr[minidx]=arr[i];
        arr[i]=temp;
    }

    printf("\n");
     for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
}
}