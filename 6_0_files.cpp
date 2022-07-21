#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Create and open a text file
    ofstream MyFile("filename.txt");

    // Write to the file
    MyFile << "This is the first line of the file\nHere goes the second";

    // Close the file
    MyFile.close();
}