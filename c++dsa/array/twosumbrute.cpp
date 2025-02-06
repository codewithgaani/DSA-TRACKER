//brute force
#include<bits/stdc++.h>
using namespace std;
vector<int> twosum(int a[],int n,int target){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(i==j) continue;
            if(a[i]+a[j]==target){
                return {i,j};
            }
        }
    }
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