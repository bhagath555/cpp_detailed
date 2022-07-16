#include<iostream>
using namespace std;

class Cube
{
private:
    float side;
    float volume(void); // Private method, defined outside the class.
public:

    Cube(float s){
        side = s;
    }

    float area()
    {
        return 6 * side * side;
    }
    void disp_vol(void){
        cout << "Volume : " << volume() << endl;
    } 

};


float Cube::volume()
{
    return side * side * side;
}

int main()
{
    Cube c1(3);
    // cout << "Volume : " << c1.volume() << endl; // Private method can't be accessed.
    c1.disp_vol();
    cout << "Area   : " << c1.area() << endl;
}