#include <>bits/stdc++.h>
using namespace std;
int main(){
    string n1,n2;
    cin>>n1;
    cin>>n2;
    if(n1.length() != n2.length()) {
        cout << "NO" << endl;
        return 0;
    }
    if(n1 == n2) {
        cout << "YES" << endl;
        return 0;
    }
    int onesinA = 0, onesinB = 0;
    for(int i = 0; i < n1.length(); i++) {
        if(n1[i] == '1') onesinA++;
        if(n2[i] == '1') onesinB++;
    }
    if((onesinA>0 && onesinB>0) || (onesinA == 0 && onesinB == 0)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;

}