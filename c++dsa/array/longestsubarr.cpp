//brute force tc :O(N2) sc :O(1)
//brute force
#include<bits/stdc++.h>
using namespace std;
int longestsubarray(int a[],int k,int n) {
    // Write your code here.
  
    int len=0;
    for(int i=0;i<n;i++){
        long long  s=0;
        for(int j=i;j<n;j++){
            s+=a[j];
            if(s==k) {
                len= max(len,j-i+1);
            }
        }    
    }
    return len;
}
int main(){
    int n,N;
    cin>>n;
    cin>>N;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int no= longestsubarray(arr,N,n);
   cout<<no;
}