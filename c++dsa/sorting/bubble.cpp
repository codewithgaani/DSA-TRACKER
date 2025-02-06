//push the maximum to the last by adjacent swaps
//13,46,24,52,20,9
//step 1: 13,24,46,20,9,52
//step 2: 13,24,20.9,46,52
//step 3: 13,20,9,24,46,52
//step 4: 13,9,20,24,46,52
//step 5: 9,13,20,24,46,52
#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arr[],int n){
    for(int i=n-1;i>1;i--){
        int didswap=0;
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                 int temp=arr[j];
                 arr[j]=arr[j+1];
                 arr[j+1]=temp;
                 didswap=1;
            }
        }
       if(didswap==0) break;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubblesort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
//TC: O(N^2) AVERAGE AND WORST
//TC:O(N) BEST CASE