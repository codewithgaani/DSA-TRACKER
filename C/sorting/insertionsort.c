#include<stdio.h>
int main (){
    int n,i;
    printf("enter array size:");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements:");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (i=1;i<n-1;i++){
        int j=i;
        //j  1 se ya 1 se bda hoga to j-1 zero tk he jayega -1 nhi jayega
        while(j>=1 && arr[j]<arr[j-1]){
           int  temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }

    }
      printf("\n");
     for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
}
}