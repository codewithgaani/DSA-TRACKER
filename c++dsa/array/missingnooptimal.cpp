//optimal solution
//tc=O(N) sc =O(1)
#include<bits/stdc++.h>
using namespace std;
int missingNumber(int a[],int N,int n) {
    // Write your code here.
     int sum=0;int s=0;
    sum=N*(N+1)/2;
    for(int i=0;i<n;i++){
        s=s+a[i];
    }
    return sum-s;
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