//select minimums and swap
//13 46 24 52 20 9
//step 1 :9 46 24 52 20 13
//step 2 :9 13 24 52 20 46 
//step 3 :9 13 20 52 24 46
//step 4 :9 13 20 24 52 46 
//step 5 :9 13 20 24 46 52 
//last index is n-1 in arrays so we take n-2 for i because we dont move to the last index.
#include<bits/stdc++.h>
using namespace std;
void selectionsort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int mini=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        int temp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
//TC: O(N^2) BEST AVERAGE AND WORST