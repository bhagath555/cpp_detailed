#include <iostream>
using namespace std;

enum fruits {Apple, Orange, Grapes = 5, Banana};
int main()
{
    fruits fr1, fr2, fr3, fr4;
    fr1 = Apple;
    cout << "fr1 value is " << fr1 << endl; // fr1 value is 0
    fr2 = Orange;
    cout << "fr2 value is " << fr2 << endl; // fr1 value is 1
    fr3 = Grapes;
    cout << "fr3 value is " << fr3 << endl; // fr1 value is 5
    fr4 = Banana;
    cout << "fr4 value is " << fr4 << endl; // fr1 value is 6
}