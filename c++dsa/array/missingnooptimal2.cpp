//optimal solution
//tc=O(N) sc =O(1)
#include<bits/stdc++.h>
using namespace std;
int missingNumber(int a[],int N,int n) {
    // Write your code here.
     int xor1=0;
   int xor2=0;
   for(int i=0;i<N-1;i++){
      
      xor2=xor2^a[i];
      xor1=xor1^(i+1);
       
  }
  xor1=xor1^N;
  return xor1^xor2;
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