//brute force
#include<bits/stdc++.h>
using namespace std;
vector<int> twosum(int a[],int n,int target){
    map<int ,int>mpp;
    for(int i=0;i<n;i++){
        int a1=a[i];
        int more=target-a1;
        if(mpp.find(more)!=mpp.end()){
            return {mpp[more],i};
        }
        mpp[a1]=i;
    }
    return {-1,-1};
}
int main(){
    int n1,target;
    cin>>n1;
    cin>>target;
    int a[n1];
    for (int i = 0; i < n1; i++) {
        cin >> a[i];
    }
 vector<int>result=twosum(a,n1,target);
   for (int num : result) {
        cout << num << " ";
    }
    return 0;
}