#include <iostream>
using namespace std;
/*
This file discusses the iostream:
    cin
    cout
    cerr
    clog
*/
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "You entered " << num << endl;

    cerr << "Error message:: \n";
    clog << "Log message:: \n";
}