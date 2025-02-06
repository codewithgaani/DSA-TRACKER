#include<bits/stdc++.h>
using namespace std;
vector<int> unionf(int a[],int b[],int n1,int n2){
        int i=0,j=0;
        vector <int> result;
        while(i<n1&&j<n2){
            if(a[i]<=b[j]){
                if(result.size()==0||result.back()!=a[i]){
                    result.push_back(a[i]);
                }
                
                i++;
            }
            else{
                if(b[j]<=a[i]){
                    if(result.size()==0||result.back()!=b[j]){
                    result.push_back(b[j]);
                }
                j++;
            }
        }
        }
        while(j<n2){
                if(result.size()==0||result.back()!=b[j]){
                    result.push_back(b[j]);
                }
                j++;
            }
            while(i<n1){
                if(result.size()==0||result.back()!=a[i]){
                    result.push_back(a[i]);
                }
                i++;
            }
        return result;
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