//brute force
//left shift
#include<bits/stdc++.h>
using namespace std;
void rotateArray(int arr[], int k,int n) {
    // Write your code here.
       k=k%n;
    int temp[k];
    for (int i = 0; i < k; i++) {
      temp[i] = arr[i];
    }
    for(int i=k;i<n;i++){
        arr[i-k]=arr[i];
    }
    int j=0;
    for (int i = n-k; i <n ; i++) {
        arr[i] = temp[j++];
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