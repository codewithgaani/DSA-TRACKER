#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
   try{
    fstream file("example.txt",ios::in|ios::out|ios::app );
    if(!file.is_open()){
        throw "unable to open file";
        }
        while(1){
        cout<<"enter 1:write in file"<<endl;
        cout<<"enter 2:read in file"<<endl;
        cout<<"enter 3:exit"<<endl;
        int ch;
        cin>>ch;
        cin.ignore();
        
        switch(ch){
            case 1:{
            string l;
            cout<<"Enter your message to write in file"<<endl;
            getline(cin,l);
            file<<l<<endl;
            break;
            }
            case 2:{
            file.clear();
            file.seekg(0);
            string line;
            while(getline(file,line)){
                cout<<line<<endl;
            }
            break;
            }
            case 3:
            {
            file.close();
            return 0;
            }
            default : cout<<"wrong choice";
        }
        }
    
   }
   catch(char e){
    cout<<e<<endl;
   }
   return 0;
}