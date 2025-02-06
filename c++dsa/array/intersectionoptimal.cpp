#include<bits/stdc++.h>
using namespace std;
vector<int> intersection(int arr1[],int arr2[],int n1,int n2){
       int i=0;
	int j=0;
	vector<int>ans;
	while(i<n1&&j<n2){
		if(arr1[i]<arr2[j]){
			i++;
		}
		else if(arr2[j]<arr1[i]){
			j++;
		}
		else{
			ans.push_back(arr1[i]);
			i++;
			j++;
		}

	}
	return ans;
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
 vector<int>result=intersection(a,b,n1,n2);
   for (int num : result) {
        cout << num << " ";
    }
    return 0;
}