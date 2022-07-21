#include<iostream>
using namespace std;


// One of the basic use of CONST keyword is to keep a variable unchanged once it declared.

void const_var(void){
    // Declaring a constant int variable.
    const int a = 2;
    cout << "const int a = 2; a ------->" << a << endl;
    cout << "const int a = 2; address ->" << &a << endl;
    /* a = 4; // This commands is invalid, because we can't change const variable.
    Even though we defined variable 'a' as const, its scope is limited, similar to normal varible,
    to current function only
    */

}

void const_ptr(void){
    const int AGE = 25;
    int c = 10;
    const int* b = new int;
    b = &c ; // Pointer b is points at address of c.
    cout << "cont int* variable address can be changed : " << *b << endl;
    // *b = 5; /* We can't change at value at pointer pointing at. */

    int* const d = new int;
    int e = 15;

    *d = e;
    // *d = &c;
    cout << *d << endl;
}

int main(void){
    const_var();
    const_ptr();
}