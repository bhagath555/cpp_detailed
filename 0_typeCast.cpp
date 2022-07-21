#include<iostream>
using namespace std;

int main(void){

    float a = 5.5;
    /*
    Implicit casting or automatic casting is done by compiler. 
    Compiler converts one data type to another.
    */
    int b = a;
    int c = (int)a;

    cout << "Original, float a : " << a << endl;
    cout << "Implicit casted a, b:" << b << endl;
    cout << "Explicit casted a, c:" << c << endl;

    int i,j;
    i = 21;
    j = 5;
    cout << "Implicit casting: data loss (21/5) = " << i/j << endl;
    cout << "Explicit casting: (21/5) " << (float)21/5 << endl;


    
}