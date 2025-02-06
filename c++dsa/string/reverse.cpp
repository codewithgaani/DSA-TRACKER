#include<iostream>
using namespace std;
int getlength(char name[]){
    int c=0;
    for(int i=0;name[i] != '\0';i++){
        c++;
        }
    return c;
    }
int reverse(char name[],int n){
        int a=0;
        int b=n-1;
        while(a<b){
            swap(name[a++],name[b--]);
        }
}
int palindrome(char name[],int n){
     int a=0;
     int b=n-1;
     while(a<=b){
        if(name[a]!=name[b]){
            return 0;
        }
        else{
            a++;
            b--;
        }
     }
     return 1;
}
int main(){
    char name[20];
    cout<<"enter your name "<<endl;
    cin>>name;
    cout<<"your name is ";
    cout << name << endl;
    int len=getlength(name);
    cout <<"length"<<len<<endl;
    reverse(name,len);
    cout<<"reversed string is"<<endl;
    cout<<name<<endl;
    cout<<"palindrome or not:"<< (palindrome(name,len)? "it is palindrome":"it is not palindrome")<< endl;
}