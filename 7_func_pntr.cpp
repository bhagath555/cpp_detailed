#include<iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}

float add_int_float(int a, float b){
    return b + (float)a;
}
int main(void){
    // Funtion pointer declaration. This pointer varible can be used for 
    // any function that has int as return type and two input parameters
    int (*funcptr)(int, int); 
    // Assining the "add" function to function pointer variable
    funcptr = add;
    // Calling the function via pointer.
    int sum = funcptr(5,3);
    cout << "Addition of 5 and 3 is " << sum << endl;  

    // -------------------  Test 2 -----------------------
    // Data type of the function pointer variable should match with function parameters type and order.
    float (*fpntr2)(int, float);
    fpntr2 = add_int_float;

    float sum2 = fpntr2(2,4.3);
    cout << "Sum of 2 and 4.3 is " << sum2 << endl;
}