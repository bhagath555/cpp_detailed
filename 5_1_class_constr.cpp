#include<iostream>
using namespace std;

class rectangle
{
    public:
    int length;
    int width;
    rectangle (int len, int wid): length(len), width(wid){}; // declaring the one line constructor.
    ~rectangle(void); // This class will be automatically at the end of the program.
};

// This class will be automatically at the end of the program.
// This often used to free the dynamically allocated memory.
rectangle::~rectangle(void){
    cout << "Deconstructing the class \n";
}

int main()
{
    rectangle b(2,5);
    cout << "Length:" << b.length << " Width:" << b.width << endl;
}