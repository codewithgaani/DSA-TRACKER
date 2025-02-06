//takes an element and place it in the correct order
#include<bits/stdc++.h>
using namespace std;
void insertionsort(int arr[],int n){
    for (int i=0;i<=n-1;i++){
        int j=i;
        //j  1 se ya 1 se bda hoga to j-1 zero tk he jayega -1 nhi jayega
        while(j>=1 && arr[j]<arr[j-1]){
           int  temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertionsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
//TC: O(N^2)  AVERAGE AND WORST
//TC:O(N) BEST CASE