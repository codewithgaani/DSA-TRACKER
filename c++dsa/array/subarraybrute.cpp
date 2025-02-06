//brute force
#include<bits/stdc++.h>
using namespace std;
int maximumsubarraysum(int a[],int n) {
    // Write your code here.
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=a[k];
            }
            maxi=max(sum,maxi);
            }
        }
        return maxi;
    }
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int no= maximumsubarraysum(arr,n);
   cout<<no;
}