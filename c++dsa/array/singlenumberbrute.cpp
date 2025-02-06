//brute force
//tc=O(N^2) sc=O(1)
#include<bits/stdc++.h>
using namespace std;
int singleNumber(int a[],int n) {
    // Write your code here.
    
    for(int i=0;i<n;i++){
        int num=a[i];
        int f=0;
        for(int j=0;j<n;j++){
            if(a[j]==num){
                f++;
            }
        }
        if(f==1) return num;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int no= singleNumber(arr,n);
   cout<<no;
}