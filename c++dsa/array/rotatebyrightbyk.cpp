//brute force
//right shift
#include<bits/stdc++.h>
using namespace std;
void rotateArray(int arr[], int k,int n) {
    // Write your code here.
       k=k%n;
    int temp[k];
    for (int i = 0; i <k; i++) {
      temp[i] = arr[n-k];
    }
    for(int i=n-k-1;i>=k;i--){
        arr[i+k]=arr[i];
    }
    int j=0;
    for (int i = 0; i <k ; i++) {
        arr[i] = temp[i];
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
        for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    rotateArray(arr,k, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}