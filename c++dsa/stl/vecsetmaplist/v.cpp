#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int>v;
    //for loop
    for ( int i = 0; i < 5; i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
        //cin>>v[i];
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    //while loop
    int idx=0;
    while (idx<v.size())
    {
        cout<<v[idx++]<<" ";
    }
    
    
    
    // cout<<"size:"<<v.size()<<endl;
    // cout<<"capacity:"<<v.capacity()<<endl;
    // v.push_back(1);
    //  cout<<"size:"<<v.size()<<endl;
    // cout<<"capacity:"<<v.capacity()<<endl;
    //  v.push_back(2);
    //  cout<<"size:"<<v.size()<<endl;
    // cout<<"capacity:"<<v.capacity()<<endl;
    //  v.push_back(3);
    //  cout<<"size:"<<v.size()<<endl;
    // cout<<"capacity:"<<v.capacity()<<endl;
    // v.push_back(4);
    //  cout<<"size:"<<v.size()<<endl;
    // cout<<"capacity:"<<v.capacity()<<endl;
    // v.resize(5);
    //  cout<<"size:"<<v.size()<<endl;
    // cout<<"capacity:"<<v.capacity()<<endl;

      return 0;
}