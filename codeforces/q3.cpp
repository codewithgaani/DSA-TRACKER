#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a,b,x,y;
        cin >> a >> b >> x >> y;
        //ADD or xor
        if(a==b) cout<<0<<endl;
        if(a>b) cout<<-1<<endl;
        