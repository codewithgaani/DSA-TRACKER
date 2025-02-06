//OPTIMAL SOL
//tc=O(N) sc=O(1)
#include<bits/stdc++.h>
using namespace std;
int singleNumber(int a[],int n) {
     int xorr=0;
      for(int i=0;i<n;i++){
        xorr=xorr^a[i];
      }
      return xorr;
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