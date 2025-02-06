#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    try{
    fstream File("example.txt",ios::in|ios::out|ios::app);
    if(!File.is_open()){
        throw ("unable to open file");
        File.seekg(0);
        string line;
        while(getline(File,line)){
            cout<<line<<endl;
        }
        File.close();
    }
    }
    catch(const char* e){
    cout<<e<<endl;
    }
}