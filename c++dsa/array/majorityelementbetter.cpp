//better solution
#include<bits/stdc++.h>
using namespace std;
int majorityele(int a[],int n) {
    // Write your code here.
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[a[i]]++;
    }
    for(auto it:mpp){
        if(it.second>(n/2)){
            return it.first;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int no= majorityele(arr,n);
   cout<<no<<endl;
   return 0;
}