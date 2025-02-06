//better solution
#include<bits/stdc++.h>
using namespace std;
int missingNumber(int a[],int N,int n) {
    // Write your code here.
    int hash[N+1]={0};
    for(int i=0;i<n-1;i++){
       hash[a[i]]=1;
    }
    for(int i=1;i<=N;i++){
        if(hash[i]==0) return i;
    }
    return -1;
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
   cout<<no<<endl;
   return 0;
}