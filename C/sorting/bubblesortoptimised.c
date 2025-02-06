#include<stdio.h>
#include<stdbool.h>
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
        bool flag =true;//array is not sorted yet
        for(int j=0;j<=n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j+1]=arr[j];
                arr[j]=temp;
                flag=false;//matlb wo sorted nahi h
            }
        }
               if(flag==true)
               break;

    }
    printf("\n");
     for (int i=0;i<n;i++){
        printf("%d",&arr[i]);
}
}