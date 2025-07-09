//brute force.
#include <bits/stdc++.h> 
using namespace std;
int longestSuccessiveElements(vector<int>a) {
    // Write your code here.
    if(a.size()==0) return 0;
    sort(a.begin(),a.end());
    int n=a.size();
    int ls=INT_MIN;
    int cnt=0;
    int longest=1;
    for(int i=0;i<n;i++){
    if(a[i]-1==ls){
        cnt=cnt+1;
        ls=a[i];
    }
    else if (a[i]!=ls){
        cnt=1;
        ls=a[i];
    }
    longest=max(longest,cnt);
}
return longest;
}
int main() {
    int n;
    cin >> n;  // Take input for the number of elements
    
    vector<int> a(n);  // Declare a vector of size n
    for (int i = 0; i < n; i++) {
        cin >> a[i];  // Input elements into the vector
    }

    int result = longestSuccessiveElements(a);  // Call function and store result
    cout << result << endl;  // Print the result

    return 0;
}

