#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;                //array
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //precompute 
   int hash[13]={0};
   for(int i=0;i<n;i++){
    hash[arr[i]]+=1;
   }

   int q;
   cin>>q;                          //queries
   while(q--){
    int no;
    cin>>no;
    //fetch
    cout<<hash[no]<<endl;
   }
}