#include<iostream>
using namespace std;

class rectangle
{
private:
    int length;
    int width;
public:
    rectangle(int len, int wid);
    ~rectangle();
    rectangle(const rectangle&);
    void disp(){
        cout << "Rectangle width:" << width << " length:" << length << endl;
    }
};
// Constructor.
rectangle::rectangle(int len, int wid): length(len), width(wid)
{
}
// Destructor.
rectangle::~rectangle()
{
}

// Copy constuctor
rectangle::rectangle(const rectangle &obj){
    length = obj.length;
    width = obj.width;
}


int main(void)
{
    rectangle rect(10,20);

    rect.disp();

    rectangle rect2(rect);
    rect2.disp();
    
    return 0;
}

