//brute force.
#include <bits/stdc++.h> 
using namespace std;
int longestSuccessiveElements(vector<int>a) {
    // Write your code here.
    if(a.size()==0) return 0;
    int n=a.size();
    int cnt=0;
    int longest=1;
    unordered_set<int>st;
    for(int i=0;i<n;i++){
        {
        st.insert(a[i]);
    }
    for(auto it:st){
        if(st.find(it-1)==st.end()){
            int cnt=1;
            int x=it;
            while(st.find(x+1)!=st.end()){
                x=x+1;
                cnt=cnt+1;
            }
            longest=max(longest,cnt);
        }
    }
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

