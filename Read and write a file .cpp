#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string text;

    // Writing to a file
    ofstream outFile("sample.txt");

    cout << "Enter text to write into the file: ";
    getline(cin, text);

    outFile << text;
    outFile.close();

    cout << "\nData written to file successfully.\n";

    // Reading from the file
    ifstream inFile("sample.txt");

    cout << "Content of the file:\n";
    while (getline(inFile, text)) {
        cout << text << endl;
    }

    inFile.close();

    return 0;
}
