#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class FileManager {
private:
    fstream file;
    string filename;

public:
    FileManager( string fname) : filename(fname) {}

    void openFile() {
        try {
            file.open(filename, ios::in | ios::out | ios::app);
            if (!file.is_open()) {
                throw "Error: Unable to open file.";
            }
        } 
        catch ( char e) {
            cout << e << endl;
            throw; // Rethrow exception if needed
        }
    }

    void closeFile() {
        if (file.is_open()) {
            file.close();
        }
    }

    void writeToFile() {
        try {
            if (!file.is_open()) {
                throw "Error: File is not open.";
            }
            string line;
            cout << "Enter your message to write in the file:" << endl;
            cin.ignore(); // Clear input buffer
            getline(cin, line);
            file << line << endl;
            cout << "Message written successfully!" << endl;
        } catch ( char e) {
            cout << e << endl;
        }
    }

    void readFromFile() {
        try {
            if (!file.is_open()) {
                throw "Error: File is not open.";
            }
            file.clear();  // Reset EOF or error flags
            file.seekg(0); // Move the pointer to the beginning of the file
            string line;
            cout << "Reading from file:" << endl;
            while (getline(file, line)) {
                cout << line << endl;
            }
        } catch ( char e) {
            cout << e << endl;
        }
    }
};

int main() {
    try {
        FileManager fm("example.txt");
        fm.openFile();

        while (true) {
            cout << "Enter 1: Write in file" << endl;
            cout << "Enter 2: Read from file" << endl;
            cout << "Enter 3: Exit" << endl;
            int choice;
            cin >> choice;

            switch (choice) {
                case 1:
                    fm.writeToFile();
                    break;
                case 2:
                    fm.readFromFile();
                    break;
                case 3:
                    fm.closeFile();
                    return 0;
                default:
                    throw "Error: Invalid choice.";
            }
        }

        fm.closeFile();
    } catch ( char e) {
        cout << e << endl;
    }

    return 0;
}
