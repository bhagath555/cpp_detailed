#include <iostream>
using namespace std;
/* You can create a new name for an existing type using typedef. 
Following is the simple syntax to define a new type using typedef. */

// feet data type is based on int.
typedef int feet;

int main()
{
    feet side;
    side = 10;
    cout << "feet data type: size = " << sizeof(feet) << ", side variable value = " << side << endl;    
}