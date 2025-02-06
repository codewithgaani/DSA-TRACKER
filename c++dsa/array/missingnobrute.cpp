//brute force
#include<bits/stdc++.h>
using namespace std;
int missingNumber(int a[],int N,int n) {
    // Write your code here.
    
    for(int i=1;i<=N;i++){
        int f=0;
        for(int j=0;j<n-1;j++){
            if(a[j]==i){
                f=1;
                break;
            }
        }
        if(f==0) return i;
    }
}
int main(){
    int n,N;
    cin>>n;
    cin>>N;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int no= missingNumber(arr,N,n);
   cout<<no;
}