#include<stdio.h>
void reverse( int arr[],int n){
     int i=0;
     int j=n-1;
     while(i<j){
          int temp=arr[i];
          arr[i]=arr[j];
          arr[j]=temp;
          i++;
          j--;
     }

}
int main()
{
     int n;
     printf("enter n:");
     scanf("%d",&n);
     int arr[n];
     for (int i =0;i<n;i++){
            scanf("%d",&arr[i]);
            
     }
     printf(" non reversed array:");
     for (int i =0;i<n;i++){
            printf(" %d ",arr[i]);
     }

     reverse(arr,n);
     printf("\nreversed array :");
     for (int i =0;i<n;i++){
            printf(" %d ",arr[i]);
     }
     printf("\n");
     return 0;
}