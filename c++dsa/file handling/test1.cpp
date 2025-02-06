#include<iostream>
#include<fstream>
using namespace std;
class filehandle{
    private:
    string filename;
    fstream file;

public:
filehandle(string (fname)) : filename(fname){}
void open(){
    try{
        file.open(filename,ios::in|ios::out|ios::app);
        if(!file.is_open()){
            throw "error";
        }
    }
    catch(char e) {
        cout<<e<<endl;

    }
}
void close()
{
        if (file.is_open()){
            file.close();
        }
   
}
void write(){
    try{
        if(!file.is_open())
        {
        throw "error";
        }
        string line;
        cout<<"Enter your message to write in the file:" << endl;
        cin.ignore();
        getline(cin,line);
        file<<line<<endl;


    }
    catch(char e){
        cout<<e<<endl;
    }

}
void read(){
    try{
         if (!file.is_open()) {
                throw "Error: File is not open.";
            }
            file.clear();  
            file.seekg(0);
            string line;
            cout << "Reading from file:" << endl;
            while (getline(file, line)) {
                cout << line << endl;
    }
    }
    catch(char e){
        cout<<e<<endl;
    }
}
};
int main(){
 try {
        filehandle fm("gaani.txt");
        fm.open();

        while (true) {
            cout << "Enter 1: Write in file" << endl;
            cout << "Enter 2: Read from file" << endl;
            cout << "Enter 3: Exit" << endl;
            int choice;
            cin >> choice;

            switch (choice) {
                case 1:
                    fm.write();
                    break;
                case 2:
                    fm.read();
                    break;
                case 3:
                    fm.close();
                    return 0;
                default:
                    throw "Error: Invalid choice.";
            }
        }

        fm.close();
    } catch ( char e) {
        cout << e << endl;
    }

    return 0;
}
