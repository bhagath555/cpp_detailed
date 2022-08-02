#include<iostream>
using namespace std;

int f1(int a, int b){
    cout << "f1 is called" << endl;
    return a+b;}

// function f2 takes pointer of function, of return:int and inputs - int and int, as a input.
void f2(int (*f1)(int, int)){
    cout << "f2 is called\n";
    int a = 10;
    int b = 15;
    int sum = f1(a,b);
    cout << "Addition of " << a << " and " << b << " is : " << sum << endl;
}

int main(void){
    // Creating a function pointer for function "f1" and using that as input to function "f2".
    int (*add)(int, int);
    add = f1;
    f2(add);
    return 0;
}