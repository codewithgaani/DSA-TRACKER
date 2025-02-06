#include<stdio.h>
void merge (int arr[],int l,int mid,int r){
    int an=mid-l+1;
    int bn=r-mid;
    //create 2 temp arrays 
    int a[an];
    int b[bn]; 
    for(int i=0;i<an;i++){
        a[i]=arr[l+i];
    for(int j=0;j<bn;j++){
        b[j]=arr[mid+1+j];
    }    
    int i=0; //initial index of first subarray,a
    int j=0;//initial index of second subarray,b
   int  k=l;//initial index of merged subarray,arr 
    while(i<an && j<bn){
        if(a[i]<b[j]){
            arr[k++]=a[i++];
        }
        else
        arr[k++]=b[j++];
    }
    while(i<an){
        arr[k++]=a[i++];
    }
    while(j<bn){
        arr[k++]=b[j++];
    }
    }
}
void mergesort(int arr[],int l,int r){
    //base case 
    if(l<=r){
    return 0;
    }
    int mid=(l+r)/2;
    mergesort(arr,l,mid);
    mergesort(arr,mid+1,r);
    merge(arr,l,mid,r);
}
int main (){
    int n,i;
    printf("enter array size:");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements:");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    mergesort(arr,0,n-1);
     printf("\n");
     for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
}
return 0;
}