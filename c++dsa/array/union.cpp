//brute force
#include<bits/stdc++.h>
using namespace std;
vector<int> unionf(int a[],int b[],int n1,int n2){
    set<int>st;
    for(int i=0;i<n1;i++){
        st.insert(a[i]);
    }
    for(int i=0;i<n2;i++){
        st.insert(b[i]);
    }
    vector<int> temp;
    for(auto it:st){
        temp.push_back(it);
    }
    return temp;
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int a[n1],b[n2];
    for (int i = 0; i < n1; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n2; i++) {
        cin >> b[i];
    }
 vector<int>result=unionf(a,b,n1,n2);
   for (int num : result) {
        cout << num << " ";
    }
    return 0;
}