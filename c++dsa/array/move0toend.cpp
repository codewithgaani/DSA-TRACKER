//brute force.
#include <bits/stdc++.h> 
using namespace std;
 void move0(int  arr[], int n) {
    // Write your code here.
    vector<int>temp;
    for(int i =0;i<n;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }
    int nz=temp.size();
    for(int i=0;i<nz;i++){
        arr[i]=temp[i];
    }
    for(int i=nz;i<n;i++){
        arr[i]=0;
    }
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    move0(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
}
return 0;
}
