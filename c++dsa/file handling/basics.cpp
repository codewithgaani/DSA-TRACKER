#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream outFile("example.txt",ios::app);
    if(outFile.is_open()){
        outFile<<"thankss shoryaaa chud gye guru"<<endl;
        outFile.close();
    }
    else cout<<"chutiya bngya file ni hai bsdk"<<endl;
    ifstream inFile;
    inFile.open("example.txt");
    string line;
    if(inFile.is_open()){
        while(getline(inFile,line)){
            cout<<line<<endl;
        }
        inFile.close();
    }
    else cout<< "unable to open file for reading:\n";
    return 0;
}
